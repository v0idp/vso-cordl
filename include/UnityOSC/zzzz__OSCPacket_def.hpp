#pragma once
// IWYU pragma private; include "UnityOSC/OSCPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OSCPacket)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityOSC {
class OSCPacket;
}
// Write type traits
MARK_REF_PTR_T(::UnityOSC::OSCPacket);
// Dependencies System.Object
namespace UnityOSC {
// Is value type: false
// CS Name: UnityOSC.OSCPacket
class CORDL_TYPE OSCPacket : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Address, put=set_Address)) ::StringW  Address;

 __declspec(property(get=get_BinaryData)) ::ArrayW<uint8_t,::Array<uint8_t>*>  BinaryData;

 __declspec(property(get=get_Data)) ::System::Collections::Generic::List_1<::System::Object*>*  Data;

 __declspec(property(get=get_TimeStamp, put=set_TimeStamp)) int64_t  TimeStamp;

/// @brief Field _address, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__address, put=__cordl_internal_set__address)) ::StringW  _address;

/// @brief Field _binaryData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__binaryData, put=__cordl_internal_set__binaryData)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _binaryData;

/// @brief Field _data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::System::Collections::Generic::List_1<::System::Object*>*  _data;

/// @brief Field _timeStamp, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeStamp, put=__cordl_internal_set__timeStamp)) int64_t  _timeStamp;

/// @brief Method Append, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline void Append(T  msgvalue) ;

/// @brief Method IsBundle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsBundle() ;

static inline ::UnityOSC::OSCPacket* New_ctor() ;

/// @brief Method Pack, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Pack() ;

/// @brief Method PackValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> PackValue(T  value) ;

/// @brief Method PadNull, addr 0x17f226c, size 0xdc, virtual false, abstract: false, final false
static inline void PadNull(::System::Collections::Generic::List_1<uint8_t>*  data) ;

/// @brief Method SwapEndian, addr 0x17f2730, size 0xb8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> SwapEndian(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method Unpack, addr 0x17f27e8, size 0x24, virtual false, abstract: false, final false
static inline ::UnityOSC::OSCPacket* Unpack(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method Unpack, addr 0x17f1ad4, size 0x40, virtual false, abstract: false, final false
static inline ::UnityOSC::OSCPacket* Unpack(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ::ByRef<int32_t>  start, int32_t  end) ;

/// @brief Method UnpackValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T UnpackValue(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ::ByRef<int32_t>  start) ;

constexpr ::StringW const& __cordl_internal_get__address() const;

constexpr ::StringW& __cordl_internal_get__address() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__binaryData() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__binaryData() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get__data() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__data() ;

constexpr int64_t const& __cordl_internal_get__timeStamp() const;

constexpr int64_t& __cordl_internal_get__timeStamp() ;

constexpr void __cordl_internal_set__address(::StringW  value) ;

constexpr void __cordl_internal_set__binaryData(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__data(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set__timeStamp(int64_t  value) ;

/// @brief Method .ctor, addr 0x17f1848, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Address, addr 0x17f2708, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Address() ;

/// @brief Method get_BinaryData, addr 0x17f1e3c, size 0x20, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_BinaryData() ;

/// @brief Method get_Data, addr 0x17f2718, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::System::Object*>* get_Data() ;

/// @brief Method get_TimeStamp, addr 0x17f2720, size 0x8, virtual false, abstract: false, final false
inline int64_t get_TimeStamp() ;

/// @brief Method set_Address, addr 0x17f2710, size 0x8, virtual false, abstract: false, final false
inline void set_Address(::StringW  value) ;

/// @brief Method set_TimeStamp, addr 0x17f2728, size 0x8, virtual false, abstract: false, final false
inline void set_TimeStamp(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OSCPacket() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OSCPacket", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OSCPacket(OSCPacket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OSCPacket", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OSCPacket(OSCPacket const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1656};

/// @brief Field _data, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ____data;

/// @brief Field _binaryData, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____binaryData;

/// @brief Field _address, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____address;

/// @brief Field _timeStamp, offset: 0x28, size: 0x8, def value: None
 int64_t  ____timeStamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityOSC::OSCPacket, ____data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityOSC::OSCPacket, ____binaryData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityOSC::OSCPacket, ____address) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityOSC::OSCPacket, ____timeStamp) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityOSC::OSCPacket, 0x30>, "Size mismatch!");

} // namespace end def UnityOSC
NEED_NO_BOX(::UnityOSC::OSCPacket);
DEFINE_IL2CPP_ARG_TYPE(::UnityOSC::OSCPacket*, "UnityOSC", "OSCPacket");
