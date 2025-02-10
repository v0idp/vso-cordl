#pragma once
// IWYU pragma private; include "VROSC/VideoManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VideoManager)
namespace VROSC {
class VideoUI;
}
// Forward declare root types
namespace VROSC {
class VideoManager;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::VideoManager);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.VideoManager
class CORDL_TYPE VideoManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _videoUI, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__videoUI, put=__cordl_internal_set__videoUI)) ::UnityW<::VROSC::VideoUI>  _videoUI;

/// @brief Method CloseUI, addr 0x1707ec8, size 0x1c, virtual false, abstract: false, final false
inline void CloseUI() ;

static inline ::VROSC::VideoManager* New_ctor() ;

/// @brief Method OpenUI, addr 0x1707eac, size 0x1c, virtual false, abstract: false, final false
inline void OpenUI(::StringW  videoPath, ::StringW  title) ;

/// @brief Method Start, addr 0x1707e90, size 0x1c, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::VROSC::VideoUI> const& __cordl_internal_get__videoUI() const;

constexpr ::UnityW<::VROSC::VideoUI>& __cordl_internal_get__videoUI() ;

constexpr void __cordl_internal_set__videoUI(::UnityW<::VROSC::VideoUI>  value) ;

/// @brief Method .ctor, addr 0x1707ee4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoManager(VideoManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoManager(VideoManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{860};

/// @brief Field _videoUI, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::VideoUI>  ____videoUI;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::VideoManager, ____videoUI) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::VideoManager, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::VideoManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VideoManager*, "VROSC", "VideoManager");
