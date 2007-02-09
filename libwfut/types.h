// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2005 - 2006 Simon Goodall

#ifndef LIBWFUT_TYPES_H
#define LIBWFUT_TYPES_H 1

#include <string>
#include <list>
#include <map>

#include <zlib.h>

namespace WFUT {

typedef struct {
  std::string name;
  std::string description;
  std::string url;
  std::string email;
  std::string logo;
} ChannelObject;

typedef std::list<ChannelObject> ChannelList;

typedef struct {
  std::string filename;
  int version;
  uLong crc32;
  long size;
  bool execute;
} FileObject;

typedef std::list<FileObject> FileList;
typedef std::map<std::string, FileObject> FileMap;

} // namespace WFUT

#endif /* LIBWFUT_TYPES_H */