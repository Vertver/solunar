#ifndef CORE_FILESYSTEM_WIN32_H
#define CORE_FILESYSTEM_WIN32_H

#ifdef _MSC_VER
#	pragma once
#endif // _MSC_VER

#include "core/filesystem/file.h"
#include "core/filesystem/ifilesystem.h"

#include <string>

namespace solunar
{

class StdFile : public IFile
{
public:
	StdFile(const char* filename, bool read);
	~StdFile();

	size_t read(void* buffer, size_t size) override;
	size_t write(void* buffer, size_t size) override;

	size_t tell() override;

	void seek(size_t offset, FileSeek fileseek) override;

	void flush() override;

private:
	FILE* m_file;

};

class FileSystemWin32 : public IFileSystem
{
public:
	FileSystemWin32(const std::string& path);
	~FileSystemWin32();

	bool fileExist(const char* path) override;

	bool createDirectory(const char* path) override;

	IFile* openFile(const char* path, bool read = true) override;

private:
	std::string computePath(const char* path);

private:
	std::string m_path;
};

}

#endif // !CORE_FILESYSTEM_WIN32_H
