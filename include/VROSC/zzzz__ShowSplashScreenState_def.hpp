#pragma once
// IWYU pragma private; include "VROSC/ShowSplashScreenState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
CORDL_MODULE_EXPORT(ShowSplashScreenState)
namespace System {
class Object;
}
namespace VROSC {
class FullScreenFxController;
}
namespace VROSC {
class IntroVideoPlayer;
}
namespace VROSC {
class PlatformSelector;
}
// Forward declare root types
namespace VROSC {
class ShowSplashScreenState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ShowSplashScreenState);
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ShowSplashScreenState
class CORDL_TYPE ShowSplashScreenState : public ::System::Object {
public:
// Declarations
/// @brief Field _fullScreenFxController, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__fullScreenFxController, put=__cordl_internal_set__fullScreenFxController)) ::UnityW<::VROSC::FullScreenFxController>  _fullScreenFxController;

/// @brief Field _introVideoPlayer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__introVideoPlayer, put=__cordl_internal_set__introVideoPlayer)) ::UnityW<::VROSC::IntroVideoPlayer>  _introVideoPlayer;

/// @brief Field _platformSelector, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__platformSelector, put=__cordl_internal_set__platformSelector)) ::UnityW<::VROSC::PlatformSelector>  _platformSelector;

/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

static inline ::VROSC::ShowSplashScreenState* New_ctor(::VROSC::FullScreenFxController*  fullScreenFxController, ::VROSC::IntroVideoPlayer*  introVideoPlayer, ::VROSC::PlatformSelector*  platformSelector) ;

/// @brief Method OnEnter, addr 0x16fa704, size 0x40, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x16fa744, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x16fa748, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x16fa74c, size 0x4, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

constexpr ::UnityW<::VROSC::FullScreenFxController> const& __cordl_internal_get__fullScreenFxController() const;

constexpr ::UnityW<::VROSC::FullScreenFxController>& __cordl_internal_get__fullScreenFxController() ;

constexpr ::UnityW<::VROSC::IntroVideoPlayer> const& __cordl_internal_get__introVideoPlayer() const;

constexpr ::UnityW<::VROSC::IntroVideoPlayer>& __cordl_internal_get__introVideoPlayer() ;

constexpr ::UnityW<::VROSC::PlatformSelector> const& __cordl_internal_get__platformSelector() const;

constexpr ::UnityW<::VROSC::PlatformSelector>& __cordl_internal_get__platformSelector() ;

constexpr void __cordl_internal_set__fullScreenFxController(::UnityW<::VROSC::FullScreenFxController>  value) ;

constexpr void __cordl_internal_set__introVideoPlayer(::UnityW<::VROSC::IntroVideoPlayer>  value) ;

constexpr void __cordl_internal_set__platformSelector(::UnityW<::VROSC::PlatformSelector>  value) ;

/// @brief Method .ctor, addr 0x16fa6c8, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::VROSC::FullScreenFxController*  fullScreenFxController, ::VROSC::IntroVideoPlayer*  introVideoPlayer, ::VROSC::PlatformSelector*  platformSelector) ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShowSplashScreenState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShowSplashScreenState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShowSplashScreenState(ShowSplashScreenState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShowSplashScreenState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShowSplashScreenState(ShowSplashScreenState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{821};

/// @brief Field _fullScreenFxController, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::FullScreenFxController>  ____fullScreenFxController;

/// @brief Field _introVideoPlayer, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::IntroVideoPlayer>  ____introVideoPlayer;

/// @brief Field _platformSelector, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::PlatformSelector>  ____platformSelector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ShowSplashScreenState, ____fullScreenFxController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ShowSplashScreenState, ____introVideoPlayer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ShowSplashScreenState, ____platformSelector) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ShowSplashScreenState, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ShowSplashScreenState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ShowSplashScreenState*, "VROSC", "ShowSplashScreenState");
