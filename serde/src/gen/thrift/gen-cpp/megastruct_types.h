/**
 * Autogenerated by Thrift Compiler (0.7.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#ifndef megastruct_TYPES_H
#define megastruct_TYPES_H

#include <Thrift.h>
#include <TApplicationException.h>
#include <protocol/TProtocol.h>
#include <transport/TTransport.h>





struct MyEnum {
  enum type {
    LLAMA = 1,
    ALPACA = 2
  };
};

extern const std::map<int, const char*> _MyEnum_VALUES_TO_NAMES;

typedef struct _MiniStruct__isset {
  _MiniStruct__isset() : my_string(false), my_enum(false) {}
  bool my_string;
  bool my_enum;
} _MiniStruct__isset;

class MiniStruct {
 public:

  static const char* ascii_fingerprint; // = "4ED2B10931906B61ED0B1592EE860A37";
  static const uint8_t binary_fingerprint[16]; // = {0x4E,0xD2,0xB1,0x09,0x31,0x90,0x6B,0x61,0xED,0x0B,0x15,0x92,0xEE,0x86,0x0A,0x37};

  MiniStruct() : my_string("") {
  }

  virtual ~MiniStruct() throw() {}

  std::string my_string;
  MyEnum::type my_enum;

  _MiniStruct__isset __isset;

  void __set_my_string(const std::string& val) {
    my_string = val;
    __isset.my_string = true;
  }

  void __set_my_enum(const MyEnum::type val) {
    my_enum = val;
    __isset.my_enum = true;
  }

  bool operator == (const MiniStruct & rhs) const
  {
    if (__isset.my_string != rhs.__isset.my_string)
      return false;
    else if (__isset.my_string && !(my_string == rhs.my_string))
      return false;
    if (__isset.my_enum != rhs.__isset.my_enum)
      return false;
    else if (__isset.my_enum && !(my_enum == rhs.my_enum))
      return false;
    return true;
  }
  bool operator != (const MiniStruct &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MiniStruct & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MegaStruct__isset {
  _MegaStruct__isset() : my_bool(false), my_byte(false), my_16bit_int(false), my_32bit_int(false), my_64bit_int(false), my_double(false), my_string(false), my_binary(false), my_string_string_map(false), my_string_enum_map(false), my_enum_string_map(false), my_enum_struct_map(false), my_enum_stringlist_map(false), my_enum_structlist_map(false), my_stringlist(false), my_structlist(false), my_enumlist(false), my_stringset(false), my_enumset(false), my_structset(false) {}
  bool my_bool;
  bool my_byte;
  bool my_16bit_int;
  bool my_32bit_int;
  bool my_64bit_int;
  bool my_double;
  bool my_string;
  bool my_binary;
  bool my_string_string_map;
  bool my_string_enum_map;
  bool my_enum_string_map;
  bool my_enum_struct_map;
  bool my_enum_stringlist_map;
  bool my_enum_structlist_map;
  bool my_stringlist;
  bool my_structlist;
  bool my_enumlist;
  bool my_stringset;
  bool my_enumset;
  bool my_structset;
} _MegaStruct__isset;

class MegaStruct {
 public:

  static const char* ascii_fingerprint; // = "9979EEF0CA19988228E64220A3AA9120";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x79,0xEE,0xF0,0xCA,0x19,0x98,0x82,0x28,0xE6,0x42,0x20,0xA3,0xAA,0x91,0x20};

  MegaStruct() : my_bool(0), my_byte(0), my_16bit_int(0), my_32bit_int(0), my_64bit_int(0), my_double(0), my_string(""), my_binary("") {
  }

  virtual ~MegaStruct() throw() {}

  bool my_bool;
  int8_t my_byte;
  int16_t my_16bit_int;
  int32_t my_32bit_int;
  int64_t my_64bit_int;
  double my_double;
  std::string my_string;
  std::string my_binary;
  std::map<std::string, std::string>  my_string_string_map;
  std::map<std::string, MyEnum::type>  my_string_enum_map;
  std::map<MyEnum::type, std::string>  my_enum_string_map;
  std::map<MyEnum::type, MiniStruct>  my_enum_struct_map;
  std::map<MyEnum::type, std::vector<std::string> >  my_enum_stringlist_map;
  std::map<MyEnum::type, std::vector<MiniStruct> >  my_enum_structlist_map;
  std::vector<std::string>  my_stringlist;
  std::vector<MiniStruct>  my_structlist;
  std::vector<MyEnum::type>  my_enumlist;
  std::set<std::string>  my_stringset;
  std::set<MyEnum::type>  my_enumset;
  std::set<MiniStruct>  my_structset;

  _MegaStruct__isset __isset;

  void __set_my_bool(const bool val) {
    my_bool = val;
    __isset.my_bool = true;
  }

  void __set_my_byte(const int8_t val) {
    my_byte = val;
    __isset.my_byte = true;
  }

  void __set_my_16bit_int(const int16_t val) {
    my_16bit_int = val;
    __isset.my_16bit_int = true;
  }

  void __set_my_32bit_int(const int32_t val) {
    my_32bit_int = val;
    __isset.my_32bit_int = true;
  }

  void __set_my_64bit_int(const int64_t val) {
    my_64bit_int = val;
    __isset.my_64bit_int = true;
  }

  void __set_my_double(const double val) {
    my_double = val;
    __isset.my_double = true;
  }

  void __set_my_string(const std::string& val) {
    my_string = val;
    __isset.my_string = true;
  }

  void __set_my_binary(const std::string& val) {
    my_binary = val;
    __isset.my_binary = true;
  }

  void __set_my_string_string_map(const std::map<std::string, std::string> & val) {
    my_string_string_map = val;
    __isset.my_string_string_map = true;
  }

  void __set_my_string_enum_map(const std::map<std::string, MyEnum::type> & val) {
    my_string_enum_map = val;
    __isset.my_string_enum_map = true;
  }

  void __set_my_enum_string_map(const std::map<MyEnum::type, std::string> & val) {
    my_enum_string_map = val;
    __isset.my_enum_string_map = true;
  }

  void __set_my_enum_struct_map(const std::map<MyEnum::type, MiniStruct> & val) {
    my_enum_struct_map = val;
    __isset.my_enum_struct_map = true;
  }

  void __set_my_enum_stringlist_map(const std::map<MyEnum::type, std::vector<std::string> > & val) {
    my_enum_stringlist_map = val;
    __isset.my_enum_stringlist_map = true;
  }

  void __set_my_enum_structlist_map(const std::map<MyEnum::type, std::vector<MiniStruct> > & val) {
    my_enum_structlist_map = val;
    __isset.my_enum_structlist_map = true;
  }

  void __set_my_stringlist(const std::vector<std::string> & val) {
    my_stringlist = val;
    __isset.my_stringlist = true;
  }

  void __set_my_structlist(const std::vector<MiniStruct> & val) {
    my_structlist = val;
    __isset.my_structlist = true;
  }

  void __set_my_enumlist(const std::vector<MyEnum::type> & val) {
    my_enumlist = val;
    __isset.my_enumlist = true;
  }

  void __set_my_stringset(const std::set<std::string> & val) {
    my_stringset = val;
    __isset.my_stringset = true;
  }

  void __set_my_enumset(const std::set<MyEnum::type> & val) {
    my_enumset = val;
    __isset.my_enumset = true;
  }

  void __set_my_structset(const std::set<MiniStruct> & val) {
    my_structset = val;
    __isset.my_structset = true;
  }

  bool operator == (const MegaStruct & rhs) const
  {
    if (__isset.my_bool != rhs.__isset.my_bool)
      return false;
    else if (__isset.my_bool && !(my_bool == rhs.my_bool))
      return false;
    if (__isset.my_byte != rhs.__isset.my_byte)
      return false;
    else if (__isset.my_byte && !(my_byte == rhs.my_byte))
      return false;
    if (__isset.my_16bit_int != rhs.__isset.my_16bit_int)
      return false;
    else if (__isset.my_16bit_int && !(my_16bit_int == rhs.my_16bit_int))
      return false;
    if (__isset.my_32bit_int != rhs.__isset.my_32bit_int)
      return false;
    else if (__isset.my_32bit_int && !(my_32bit_int == rhs.my_32bit_int))
      return false;
    if (__isset.my_64bit_int != rhs.__isset.my_64bit_int)
      return false;
    else if (__isset.my_64bit_int && !(my_64bit_int == rhs.my_64bit_int))
      return false;
    if (__isset.my_double != rhs.__isset.my_double)
      return false;
    else if (__isset.my_double && !(my_double == rhs.my_double))
      return false;
    if (__isset.my_string != rhs.__isset.my_string)
      return false;
    else if (__isset.my_string && !(my_string == rhs.my_string))
      return false;
    if (__isset.my_binary != rhs.__isset.my_binary)
      return false;
    else if (__isset.my_binary && !(my_binary == rhs.my_binary))
      return false;
    if (__isset.my_string_string_map != rhs.__isset.my_string_string_map)
      return false;
    else if (__isset.my_string_string_map && !(my_string_string_map == rhs.my_string_string_map))
      return false;
    if (__isset.my_string_enum_map != rhs.__isset.my_string_enum_map)
      return false;
    else if (__isset.my_string_enum_map && !(my_string_enum_map == rhs.my_string_enum_map))
      return false;
    if (__isset.my_enum_string_map != rhs.__isset.my_enum_string_map)
      return false;
    else if (__isset.my_enum_string_map && !(my_enum_string_map == rhs.my_enum_string_map))
      return false;
    if (__isset.my_enum_struct_map != rhs.__isset.my_enum_struct_map)
      return false;
    else if (__isset.my_enum_struct_map && !(my_enum_struct_map == rhs.my_enum_struct_map))
      return false;
    if (__isset.my_enum_stringlist_map != rhs.__isset.my_enum_stringlist_map)
      return false;
    else if (__isset.my_enum_stringlist_map && !(my_enum_stringlist_map == rhs.my_enum_stringlist_map))
      return false;
    if (__isset.my_enum_structlist_map != rhs.__isset.my_enum_structlist_map)
      return false;
    else if (__isset.my_enum_structlist_map && !(my_enum_structlist_map == rhs.my_enum_structlist_map))
      return false;
    if (__isset.my_stringlist != rhs.__isset.my_stringlist)
      return false;
    else if (__isset.my_stringlist && !(my_stringlist == rhs.my_stringlist))
      return false;
    if (__isset.my_structlist != rhs.__isset.my_structlist)
      return false;
    else if (__isset.my_structlist && !(my_structlist == rhs.my_structlist))
      return false;
    if (__isset.my_enumlist != rhs.__isset.my_enumlist)
      return false;
    else if (__isset.my_enumlist && !(my_enumlist == rhs.my_enumlist))
      return false;
    if (__isset.my_stringset != rhs.__isset.my_stringset)
      return false;
    else if (__isset.my_stringset && !(my_stringset == rhs.my_stringset))
      return false;
    if (__isset.my_enumset != rhs.__isset.my_enumset)
      return false;
    else if (__isset.my_enumset && !(my_enumset == rhs.my_enumset))
      return false;
    if (__isset.my_structset != rhs.__isset.my_structset)
      return false;
    else if (__isset.my_structset && !(my_structset == rhs.my_structset))
      return false;
    return true;
  }
  bool operator != (const MegaStruct &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MegaStruct & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};



#endif
