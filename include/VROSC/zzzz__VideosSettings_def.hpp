#pragma once
// IWYU pragma private; include "VROSC/VideosSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VideosSettings)
namespace VROSC {
class VideoInfo;
}
// Forward declare root types
namespace VROSC {
class VideosSettings;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::VideosSettings);
// Dependencies UnityEngine.ScriptableObject
namespace VROSC {
// Is value type: false
// CS Name: VROSC.VideosSettings
class CORDL_TYPE VideosSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field _videoInfos, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__videoInfos, put=__cordl_internal_set__videoInfos)) ::ArrayW<::VROSC::VideoInfo*,::Array<::VROSC::VideoInfo*>*>  _videoInfos;

/// @brief Method GenerateJson, addr 0x177d384, size 0x14c, virtual false, abstract: false, final false
inline void GenerateJson() ;

static inline ::VROSC::VideosSettings* New_ctor() ;

constexpr ::ArrayW<::VROSC::VideoInfo*,::Array<::VROSC::VideoInfo*>*> const& __cordl_internal_get__videoInfos() const;

constexpr ::ArrayW<::VROSC::VideoInfo*,::Array<::VROSC::VideoInfo*>*>& __cordl_internal_get__videoInfos() ;

constexpr void __cordl_internal_set__videoInfos(::ArrayW<::VROSC::VideoInfo*,::Array<::VROSC::VideoInfo*>*>  value) ;

/// @brief Method .ctor, addr 0x177d4d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideosSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideosSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideosSettings(VideosSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideosSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideosSettings(VideosSettings const& ) = delete;

/// @brief Field RequiredVersion offset 0xffffffff size 0x8
static constexpr ::ConstString  RequiredVersion{u"0.4.0"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1297};

/// @brief Field _videoInfos, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::VROSC::VideoInfo*,::Array<::VROSC::VideoInfo*>*>  ____videoInfos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::VideosSettings, ____videoInfos) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::VideosSettings, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::VideosSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VideosSettings*, "VROSC", "VideosSettings");
