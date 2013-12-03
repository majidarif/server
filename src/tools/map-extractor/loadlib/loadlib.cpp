/**
 * mangos-three is a full featured server for World of Warcraft in its cataclysm
 * version, supporting clients for patch 4.3.4.
 *
 * Copyright (C) 2005-2013  MaNGOS project <http://getmangos.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * World of Warcraft, and all World of Warcraft or Warcraft art, images,
 * and lore are copyrighted by Blizzard Entertainment, Inc.
 */

#include "loadlib.h"

FileLoader::FileLoader()
{
    data = 0;
    data_size = 0;
    version = 0;
}

FileLoader::~FileLoader()
{
    free();
}

bool FileLoader::loadFile(HANDLE mpq, char* filename, bool log)
{
    free();

    HANDLE fileHandle = 0;

    free();
    HANDLE file;
    if (!SFileOpenFileEx(mpq, filename, SFILE_OPEN_PATCHED_FILE, &file))
    {
        if (log)
            printf("No such file %s\n", filename);
        return false;
    }

    data_size = SFileGetFileSize(fileHandle, NULL);

    data = new uint8 [data_size];
    if (!data)
    {
        SFileCloseFile(fileHandle);
        return false;
    }

    if (!SFileReadFile(fileHandle, data, data_size, NULL, NULL))
    {
        if (log)
            printf("Can't read file %s\n", filename);
        SFileCloseFile(fileHandle);
        return false;
    }

    SFileCloseFile(fileHandle);

    // ToDo: Fix WDT errors...
    if (!prepareLoadedData())
    {
        //printf("Error loading %s\n\n", filename);
        //free();
        return true;
    }

    return true;
}

bool FileLoader::prepareLoadedData()
{
    // Check version
    version = (file_MVER*) data;
    if (version->fcc != 'MVER')
        return false;
    if (version->ver != FILE_FORMAT_VERSION)
        return false;
    return true;
}

void FileLoader::free()
{
    if (data) delete[] data;
    data = 0;
    data_size = 0;
    version = 0;
}