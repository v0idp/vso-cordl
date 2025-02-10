#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/GeoIPResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GeoIPResponse)
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class GeoIPResponse;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::GeoIPResponse);
// Dependencies System.Object
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.GeoIPResponse
class CORDL_TYPE GeoIPResponse : public ::System::Object {
public:
// Declarations
/// @brief Field identifier, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_identifier, put=__cordl_internal_set_identifier)) ::StringW  identifier;

static inline ::Unity::Services::Analytics::Internal::GeoIPResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_identifier() const;

constexpr ::StringW& __cordl_internal_get_identifier() ;

constexpr void __cordl_internal_set_identifier(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e91e10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GeoIPResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GeoIPResponse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GeoIPResponse(GeoIPResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeoIPResponse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeoIPResponse(GeoIPResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11885};

/// @brief Field identifier, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___identifier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::Internal::GeoIPResponse, ___identifier) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Internal::GeoIPResponse, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::GeoIPResponse);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::GeoIPResponse*, "Unity.Services.Analytics.Internal", "GeoIPResponse");
