#pragma once
// IWYU pragma private; include "VROSC/StartState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
CORDL_MODULE_EXPORT(StartState)
namespace System {
class Object;
}
namespace VROSC {
class FullScreenFxController;
}
// Forward declare root types
namespace VROSC {
class StartState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::StartState);
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.StartState
class CORDL_TYPE StartState : public ::System::Object {
public:
// Declarations
/// @brief Field _fullScreenFxController, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__fullScreenFxController, put=__cordl_internal_set__fullScreenFxController)) ::UnityW<::VROSC::FullScreenFxController>  _fullScreenFxController;

/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

static inline ::VROSC::StartState* New_ctor(::VROSC::FullScreenFxController*  fullScreenFxController) ;

/// @brief Method OnEnter, addr 0x16fa778, size 0x84, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x16fa7fc, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x16fa800, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x16fa804, size 0x4, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

constexpr ::UnityW<::VROSC::FullScreenFxController> const& __cordl_internal_get__fullScreenFxController() const;

constexpr ::UnityW<::VROSC::FullScreenFxController>& __cordl_internal_get__fullScreenFxController() ;

constexpr void __cordl_internal_set__fullScreenFxController(::UnityW<::VROSC::FullScreenFxController>  value) ;

/// @brief Method .ctor, addr 0x16fa750, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::VROSC::FullScreenFxController*  fullScreenFxController) ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StartState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StartState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StartState(StartState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StartState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StartState(StartState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{822};

/// @brief Field _fullScreenFxController, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::FullScreenFxController>  ____fullScreenFxController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::StartState, ____fullScreenFxController) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::StartState, 0x18>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::StartState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::StartState*, "VROSC", "StartState");
