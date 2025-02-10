#pragma once
// IWYU pragma private; include "UnityOSC/OSCMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityOSC/zzzz__OSCPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OSCMessage)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityOSC {
class OSCMessage;
}
// Write type traits
MARK_REF_PTR_T(::UnityOSC::OSCMessage);
// Dependencies UnityOSC.OSCPacket
namespace UnityOSC {
// Is value type: false
// CS Name: UnityOSC.OSCMessage
class CORDL_TYPE OSCMessage : public ::UnityOSC::OSCPacket {
public:
// Declarations
/// @brief Field _typeTag, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__typeTag, put=__cordl_internal_set__typeTag)) ::StringW  _typeTag;

/// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline void Append(T  value) ;

/// @brief Method IsBundle, addr 0x17f1fa8, size 0x8, virtual true, abstract: false, final false
inline bool IsBundle() ;

static inline ::UnityOSC::OSCMessage* New_ctor(::StringW  address) ;

static inline ::UnityOSC::OSCMessage* New_ctor(::StringW  address, ::System::Object*  msgvalue) ;

/// @brief Method Pack, addr 0x17f1fb0, size 0x2bc, virtual true, abstract: false, final false
inline void Pack() ;

/// @brief Method Unpack, addr 0x17f2348, size 0x3c0, virtual false, abstract: false, final false
static inline ::UnityOSC::OSCMessage* Unpack(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ::ByRef<int32_t>  start) ;

constexpr ::StringW const& __cordl_internal_get__typeTag() const;

constexpr ::StringW& __cordl_internal_get__typeTag() ;

constexpr void __cordl_internal_set__typeTag(::StringW  value) ;

/// @brief Method .ctor, addr 0x17f1e5c, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::StringW  address) ;

/// @brief Method .ctor, addr 0x17f1edc, size 0xcc, virtual false, abstract: false, final false
inline void _ctor(::StringW  address, ::System::Object*  msgvalue) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OSCMessage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OSCMessage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OSCMessage(OSCMessage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OSCMessage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OSCMessage(OSCMessage const& ) = delete;

/// @brief Field BYTE offset 0xffffffff size 0x2
static constexpr char16_t  BYTE{u'b'};

/// @brief Field DEFAULT offset 0xffffffff size 0x2
static constexpr char16_t  DEFAULT{u','};

/// @brief Field DOUBLE offset 0xffffffff size 0x2
static constexpr char16_t  DOUBLE{u'd'};

/// @brief Field FLOAT offset 0xffffffff size 0x2
static constexpr char16_t  FLOAT{u'f'};

/// @brief Field INTEGER offset 0xffffffff size 0x2
static constexpr char16_t  INTEGER{u'i'};

/// @brief Field LONG offset 0xffffffff size 0x2
static constexpr char16_t  LONG{u'h'};

/// @brief Field STRING offset 0xffffffff size 0x2
static constexpr char16_t  STRING{u's'};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1655};

/// @brief Field _typeTag, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____typeTag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityOSC::OSCMessage, ____typeTag) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityOSC::OSCMessage, 0x38>, "Size mismatch!");

} // namespace end def UnityOSC
NEED_NO_BOX(::UnityOSC::OSCMessage);
DEFINE_IL2CPP_ARG_TYPE(::UnityOSC::OSCMessage*, "UnityOSC", "OSCMessage");
