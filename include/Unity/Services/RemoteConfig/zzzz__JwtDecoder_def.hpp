#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/JwtDecoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JwtDecoder)
// Forward declare root types
namespace Unity::Services::RemoteConfig {
class JwtDecoder;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::RemoteConfig::JwtDecoder);
// Dependencies System.Object
namespace Unity::Services::RemoteConfig {
// Is value type: false
// CS Name: Unity.Services.RemoteConfig.JwtDecoder
class CORDL_TYPE JwtDecoder : public ::System::Object {
public:
// Declarations
/// @brief Method Base64UrlDecode, addr 0x2eaad18, size 0xd8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Base64UrlDecode(::StringW  input) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JwtDecoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JwtDecoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JwtDecoder(JwtDecoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JwtDecoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JwtDecoder(JwtDecoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12227};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::RemoteConfig::JwtDecoder, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::RemoteConfig
NEED_NO_BOX(::Unity::Services::RemoteConfig::JwtDecoder);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::RemoteConfig::JwtDecoder*, "Unity.Services.RemoteConfig", "JwtDecoder");
