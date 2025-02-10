#pragma once
// IWYU pragma private; include "VROSC/WaitForEmailVerificationState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WaitForEmailVerificationState)
namespace System {
class Object;
}
namespace VROSC {
class AuthenticationManager;
}
namespace VROSC {
struct Error;
}
// Forward declare root types
namespace VROSC {
class WaitForEmailVerificationState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::WaitForEmailVerificationState);
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.WaitForEmailVerificationState
class CORDL_TYPE WaitForEmailVerificationState : public ::System::Object {
public:
// Declarations
/// @brief Field _attemptedSendingVerificationEmail, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__attemptedSendingVerificationEmail, put=__cordl_internal_set__attemptedSendingVerificationEmail)) bool  _attemptedSendingVerificationEmail;

/// @brief Field _authManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__authManager, put=__cordl_internal_set__authManager)) ::UnityW<::VROSC::AuthenticationManager>  _authManager;

/// @brief Field _reloadTimer, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__reloadTimer, put=__cordl_internal_set__reloadTimer)) float_t  _reloadTimer;

/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

/// @brief Method FirebaseSendVerificationEmailFailure, addr 0x18303b0, size 0xe4, virtual false, abstract: false, final false
inline void FirebaseSendVerificationEmailFailure(::VROSC::Error  error) ;

/// @brief Method FirebaseSendVerificationEmailSuccess, addr 0x1830224, size 0x18c, virtual false, abstract: false, final false
inline void FirebaseSendVerificationEmailSuccess() ;

static inline ::VROSC::WaitForEmailVerificationState* New_ctor(::VROSC::AuthenticationManager*  authManager) ;

/// @brief Method OnEnter, addr 0x1830014, size 0xc, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x1830020, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x1830024, size 0x1d4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x1830220, size 0x4, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

constexpr bool const& __cordl_internal_get__attemptedSendingVerificationEmail() const;

constexpr bool& __cordl_internal_get__attemptedSendingVerificationEmail() ;

constexpr ::UnityW<::VROSC::AuthenticationManager> const& __cordl_internal_get__authManager() const;

constexpr ::UnityW<::VROSC::AuthenticationManager>& __cordl_internal_get__authManager() ;

constexpr float_t const& __cordl_internal_get__reloadTimer() const;

constexpr float_t& __cordl_internal_get__reloadTimer() ;

constexpr void __cordl_internal_set__attemptedSendingVerificationEmail(bool  value) ;

constexpr void __cordl_internal_set__authManager(::UnityW<::VROSC::AuthenticationManager>  value) ;

constexpr void __cordl_internal_set__reloadTimer(float_t  value) ;

/// @brief Method .ctor, addr 0x182d01c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::VROSC::AuthenticationManager*  authManager) ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaitForEmailVerificationState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaitForEmailVerificationState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaitForEmailVerificationState(WaitForEmailVerificationState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaitForEmailVerificationState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaitForEmailVerificationState(WaitForEmailVerificationState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{318};

/// @brief Field _authManager, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::AuthenticationManager>  ____authManager;

/// @brief Field _reloadTimer, offset: 0x18, size: 0x4, def value: None
 float_t  ____reloadTimer;

/// @brief Field _attemptedSendingVerificationEmail, offset: 0x1c, size: 0x1, def value: None
 bool  ____attemptedSendingVerificationEmail;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::WaitForEmailVerificationState, ____authManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaitForEmailVerificationState, ____reloadTimer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaitForEmailVerificationState, ____attemptedSendingVerificationEmail) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::WaitForEmailVerificationState, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::WaitForEmailVerificationState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::WaitForEmailVerificationState*, "VROSC", "WaitForEmailVerificationState");
