#pragma once
// IWYU pragma private; include "VROSC/LoadScenesState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
CORDL_MODULE_EXPORT(LoadScenesState)
namespace System {
class Object;
}
namespace VROSC {
class EnvironmentController;
}
namespace VROSC {
class FullScreenFxController;
}
// Forward declare root types
namespace VROSC {
class LoadScenesState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoadScenesState);
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoadScenesState
class CORDL_TYPE LoadScenesState : public ::System::Object {
public:
// Declarations
/// @brief Field _environmentController, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__environmentController, put=__cordl_internal_set__environmentController)) ::UnityW<::VROSC::EnvironmentController>  _environmentController;

/// @brief Field _fullScreenFxController, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__fullScreenFxController, put=__cordl_internal_set__fullScreenFxController)) ::UnityW<::VROSC::FullScreenFxController>  _fullScreenFxController;

/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

static inline ::VROSC::LoadScenesState* New_ctor(::VROSC::FullScreenFxController*  fullScreenFxController, ::VROSC::EnvironmentController*  environmentController) ;

/// @brief Method OnEnter, addr 0x16f8f68, size 0x1c, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x16f8f84, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x16f8f88, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x16f8f8c, size 0x4, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

constexpr ::UnityW<::VROSC::EnvironmentController> const& __cordl_internal_get__environmentController() const;

constexpr ::UnityW<::VROSC::EnvironmentController>& __cordl_internal_get__environmentController() ;

constexpr ::UnityW<::VROSC::FullScreenFxController> const& __cordl_internal_get__fullScreenFxController() const;

constexpr ::UnityW<::VROSC::FullScreenFxController>& __cordl_internal_get__fullScreenFxController() ;

constexpr void __cordl_internal_set__environmentController(::UnityW<::VROSC::EnvironmentController>  value) ;

constexpr void __cordl_internal_set__fullScreenFxController(::UnityW<::VROSC::FullScreenFxController>  value) ;

/// @brief Method .ctor, addr 0x16f8f3c, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::VROSC::FullScreenFxController*  fullScreenFxController, ::VROSC::EnvironmentController*  environmentController) ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadScenesState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadScenesState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadScenesState(LoadScenesState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadScenesState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadScenesState(LoadScenesState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{805};

/// @brief Field _fullScreenFxController, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::FullScreenFxController>  ____fullScreenFxController;

/// @brief Field _environmentController, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::EnvironmentController>  ____environmentController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoadScenesState, ____fullScreenFxController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoadScenesState, ____environmentController) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoadScenesState, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoadScenesState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoadScenesState*, "VROSC", "LoadScenesState");
