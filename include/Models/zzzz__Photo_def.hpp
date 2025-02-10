#pragma once
// IWYU pragma private; include "Models/Photo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Photo)
// Forward declare root types
namespace Models {
class Photo;
}
// Write type traits
MARK_REF_PTR_T(::Models::Photo);
// Dependencies System.Object
namespace Models {
// Is value type: false
// CS Name: Models.Photo
class CORDL_TYPE Photo : public ::System::Object {
public:
// Declarations
/// @brief Field albumId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_albumId, put=__cordl_internal_set_albumId)) int32_t  albumId;

/// @brief Field id, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) int32_t  id;

/// @brief Field thumbnailUrl, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_thumbnailUrl, put=__cordl_internal_set_thumbnailUrl)) ::StringW  thumbnailUrl;

/// @brief Field title, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_title, put=__cordl_internal_set_title)) ::StringW  title;

/// @brief Field url, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_url, put=__cordl_internal_set_url)) ::StringW  url;

static inline ::Models::Photo* New_ctor() ;

/// @brief Method ToString, addr 0x17fa6cc, size 0xc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_albumId() const;

constexpr int32_t& __cordl_internal_get_albumId() ;

constexpr int32_t const& __cordl_internal_get_id() const;

constexpr int32_t& __cordl_internal_get_id() ;

constexpr ::StringW const& __cordl_internal_get_thumbnailUrl() const;

constexpr ::StringW& __cordl_internal_get_thumbnailUrl() ;

constexpr ::StringW const& __cordl_internal_get_title() const;

constexpr ::StringW& __cordl_internal_get_title() ;

constexpr ::StringW const& __cordl_internal_get_url() const;

constexpr ::StringW& __cordl_internal_get_url() ;

constexpr void __cordl_internal_set_albumId(int32_t  value) ;

constexpr void __cordl_internal_set_id(int32_t  value) ;

constexpr void __cordl_internal_set_thumbnailUrl(::StringW  value) ;

constexpr void __cordl_internal_set_title(::StringW  value) ;

constexpr void __cordl_internal_set_url(::StringW  value) ;

/// @brief Method .ctor, addr 0x17fa6d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Photo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Photo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Photo(Photo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Photo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Photo(Photo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1749};

/// @brief Field albumId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___albumId;

/// @brief Field id, offset: 0x14, size: 0x4, def value: None
 int32_t  ___id;

/// @brief Field title, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___title;

/// @brief Field url, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___url;

/// @brief Field thumbnailUrl, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___thumbnailUrl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Models::Photo, ___albumId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Models::Photo, ___id) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Models::Photo, ___title) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Models::Photo, ___url) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Models::Photo, ___thumbnailUrl) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Models::Photo, 0x30>, "Size mismatch!");

} // namespace end def Models
NEED_NO_BOX(::Models::Photo);
DEFINE_IL2CPP_ARG_TYPE(::Models::Photo*, "Models", "Photo");
