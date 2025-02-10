#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/JwtDecoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Authentication/zzzz__IJwtDecoder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JwtDecoder)
// Forward declare root types
namespace Unity::Services::Authentication {
class JwtDecoder;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::JwtDecoder);
// Dependencies System.Object, Unity.Services.Authentication.IJwtDecoder
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.JwtDecoder
class CORDL_TYPE JwtDecoder : public ::System::Object {
public:
// Declarations
/// @brief Field k_JwtSeparator, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_JwtSeparator, put=setStaticF_k_JwtSeparator)) ::ArrayW<char16_t,::Array<char16_t>*>  k_JwtSeparator;

/// @brief Convert operator to "::Unity::Services::Authentication::IJwtDecoder"
constexpr operator  ::Unity::Services::Authentication::IJwtDecoder*() noexcept;

/// @brief Method Base64UrlDecode, addr 0x2e9a050, size 0xd8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Base64UrlDecode(::StringW  input) ;

/// @brief Method Decode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline T Decode(::StringW  token) ;

static inline ::Unity::Services::Authentication::JwtDecoder* New_ctor() ;

/// @brief Method .ctor, addr 0x2e96560, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_k_JwtSeparator() ;

/// @brief Convert to "::Unity::Services::Authentication::IJwtDecoder"
constexpr ::Unity::Services::Authentication::IJwtDecoder* i___Unity__Services__Authentication__IJwtDecoder() noexcept;

static inline void setStaticF_k_JwtSeparator(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11587};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::JwtDecoder, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::JwtDecoder);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::JwtDecoder*, "Unity.Services.Authentication", "JwtDecoder");
