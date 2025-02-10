#pragma once
// IWYU pragma private; include "UnityOSC/OSCBundle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityOSC/zzzz__OSCPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OSCBundle)
// Forward declare root types
namespace UnityOSC {
class OSCBundle;
}
// Write type traits
MARK_REF_PTR_T(::UnityOSC::OSCBundle);
// Dependencies UnityOSC.OSCPacket
namespace UnityOSC {
// Is value type: false
// CS Name: UnityOSC.OSCBundle
class CORDL_TYPE OSCBundle : public ::UnityOSC::OSCPacket {
public:
// Declarations
/// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline void Append(T  msgvalue) ;

/// @brief Method IsBundle, addr 0x17f1924, size 0x8, virtual true, abstract: false, final false
inline bool IsBundle() ;

static inline ::UnityOSC::OSCBundle* New_ctor() ;

static inline ::UnityOSC::OSCBundle* New_ctor(int64_t  timestamp) ;

/// @brief Method Pack, addr 0x17f192c, size 0x4c, virtual true, abstract: false, final false
inline void Pack() ;

/// @brief Method Unpack, addr 0x17f1978, size 0x15c, virtual false, abstract: false, final false
static inline ::UnityOSC::OSCBundle* Unpack(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ::ByRef<int32_t>  start, int32_t  end) ;

/// @brief Method .ctor, addr 0x17f17f8, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x17f18c8, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(int64_t  timestamp) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OSCBundle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OSCBundle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OSCBundle(OSCBundle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OSCBundle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OSCBundle(OSCBundle const& ) = delete;

/// @brief Field BUNDLE offset 0xffffffff size 0x8
static constexpr ::ConstString  BUNDLE{u"#bundle"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1653};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityOSC::OSCBundle, 0x30>, "Size mismatch!");

} // namespace end def UnityOSC
NEED_NO_BOX(::UnityOSC::OSCBundle);
DEFINE_IL2CPP_ARG_TYPE(::UnityOSC::OSCBundle*, "UnityOSC", "OSCBundle");
