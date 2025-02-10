#pragma once
// IWYU pragma private; include "VROSC/VideoInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__PaginatedListItemData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VideoInfo)
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace VROSC {
class VideoInfo;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::VideoInfo);
// Dependencies VROSC.PaginatedListItemData
namespace VROSC {
// Is value type: false
// CS Name: VROSC.VideoInfo
class CORDL_TYPE VideoInfo : public ::VROSC::PaginatedListItemData {
public:
// Declarations
/// @brief Field RequiredVersion, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_RequiredVersion, put=__cordl_internal_set_RequiredVersion)) ::StringW  RequiredVersion;

 __declspec(property(get=get_Thumbnail, put=set_Thumbnail)) ::UnityW<::UnityEngine::Texture>  Thumbnail;

/// @brief Field Title, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Title, put=__cordl_internal_set_Title)) ::StringW  Title;

/// @brief Field VideoId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_VideoId, put=__cordl_internal_set_VideoId)) ::StringW  VideoId;

/// @brief Field VideoPath, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_VideoPath, put=__cordl_internal_set_VideoPath)) ::StringW  VideoPath;

/// @brief Field <Thumbnail>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Thumbnail_k__BackingField, put=__cordl_internal_set__Thumbnail_k__BackingField)) ::UnityW<::UnityEngine::Texture>  _Thumbnail_k__BackingField;

static inline ::VROSC::VideoInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_RequiredVersion() const;

constexpr ::StringW& __cordl_internal_get_RequiredVersion() ;

constexpr ::StringW const& __cordl_internal_get_Title() const;

constexpr ::StringW& __cordl_internal_get_Title() ;

constexpr ::StringW const& __cordl_internal_get_VideoId() const;

constexpr ::StringW& __cordl_internal_get_VideoId() ;

constexpr ::StringW const& __cordl_internal_get_VideoPath() const;

constexpr ::StringW& __cordl_internal_get_VideoPath() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get__Thumbnail_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get__Thumbnail_k__BackingField() ;

constexpr void __cordl_internal_set_RequiredVersion(::StringW  value) ;

constexpr void __cordl_internal_set_Title(::StringW  value) ;

constexpr void __cordl_internal_set_VideoId(::StringW  value) ;

constexpr void __cordl_internal_set_VideoPath(::StringW  value) ;

constexpr void __cordl_internal_set__Thumbnail_k__BackingField(::UnityW<::UnityEngine::Texture>  value) ;

/// @brief Method .ctor, addr 0x177d37c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Thumbnail, addr 0x177d36c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> get_Thumbnail() ;

/// @brief Method set_Thumbnail, addr 0x177d374, size 0x8, virtual false, abstract: false, final false
inline void set_Thumbnail(::UnityEngine::Texture*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoInfo(VideoInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoInfo(VideoInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1296};

/// @brief Field VideoId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___VideoId;

/// @brief Field VideoPath, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___VideoPath;

/// @brief Field Title, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Title;

/// @brief Field RequiredVersion, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___RequiredVersion;

/// @brief Field <Thumbnail>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ____Thumbnail_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::VideoInfo, ___VideoId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoInfo, ___VideoPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoInfo, ___Title) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoInfo, ___RequiredVersion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoInfo, ____Thumbnail_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::VideoInfo, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::VideoInfo);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VideoInfo*, "VROSC", "VideoInfo");
