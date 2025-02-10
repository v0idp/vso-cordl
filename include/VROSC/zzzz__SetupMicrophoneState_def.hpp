#pragma once
// IWYU pragma private; include "VROSC/SetupMicrophoneState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
CORDL_MODULE_EXPORT(SetupMicrophoneState)
namespace System {
class Object;
}
namespace VROSC {
class MicrophoneDeviceManager;
}
// Forward declare root types
namespace VROSC {
class SetupMicrophoneState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SetupMicrophoneState);
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SetupMicrophoneState
class CORDL_TYPE SetupMicrophoneState : public ::System::Object {
public:
// Declarations
/// @brief Field _microphoneManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__microphoneManager, put=__cordl_internal_set__microphoneManager)) ::UnityW<::VROSC::MicrophoneDeviceManager>  _microphoneManager;

/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

static inline ::VROSC::SetupMicrophoneState* New_ctor(::VROSC::MicrophoneDeviceManager*  microphoneManager) ;

/// @brief Method OnEnter, addr 0x16fa2fc, size 0x1c, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x16fa318, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x16fa31c, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x16fa320, size 0x4, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

constexpr ::UnityW<::VROSC::MicrophoneDeviceManager> const& __cordl_internal_get__microphoneManager() const;

constexpr ::UnityW<::VROSC::MicrophoneDeviceManager>& __cordl_internal_get__microphoneManager() ;

constexpr void __cordl_internal_set__microphoneManager(::UnityW<::VROSC::MicrophoneDeviceManager>  value) ;

/// @brief Method .ctor, addr 0x16fa2d4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::VROSC::MicrophoneDeviceManager*  microphoneManager) ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetupMicrophoneState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetupMicrophoneState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetupMicrophoneState(SetupMicrophoneState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetupMicrophoneState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetupMicrophoneState(SetupMicrophoneState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{816};

/// @brief Field _microphoneManager, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::MicrophoneDeviceManager>  ____microphoneManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SetupMicrophoneState, ____microphoneManager) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SetupMicrophoneState, 0x18>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SetupMicrophoneState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SetupMicrophoneState*, "VROSC", "SetupMicrophoneState");
