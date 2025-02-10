#pragma once
// IWYU pragma private; include "VROSC/CheckLocalDataState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
CORDL_MODULE_EXPORT(CheckLocalDataState)
namespace System {
class Object;
}
namespace VROSC {
class AuthenticationManager;
}
// Forward declare root types
namespace VROSC {
class CheckLocalDataState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::CheckLocalDataState);
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CheckLocalDataState
class CORDL_TYPE CheckLocalDataState : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_HasCheckedForData, put=set_HasCheckedForData)) bool  HasCheckedForData;

/// @brief Field <HasCheckedForData>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasCheckedForData_k__BackingField, put=__cordl_internal_set__HasCheckedForData_k__BackingField)) bool  _HasCheckedForData_k__BackingField;

/// @brief Field _authManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__authManager, put=__cordl_internal_set__authManager)) ::UnityW<::VROSC::AuthenticationManager>  _authManager;

/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

static inline ::VROSC::CheckLocalDataState* New_ctor(::VROSC::AuthenticationManager*  authManager) ;

/// @brief Method OnEnter, addr 0x182ef30, size 0x1cc, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x182f0fc, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x182f100, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x182f104, size 0x4, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

constexpr bool const& __cordl_internal_get__HasCheckedForData_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasCheckedForData_k__BackingField() ;

constexpr ::UnityW<::VROSC::AuthenticationManager> const& __cordl_internal_get__authManager() const;

constexpr ::UnityW<::VROSC::AuthenticationManager>& __cordl_internal_get__authManager() ;

constexpr void __cordl_internal_set__HasCheckedForData_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__authManager(::UnityW<::VROSC::AuthenticationManager>  value) ;

/// @brief Method .ctor, addr 0x182cf88, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::VROSC::AuthenticationManager*  authManager) ;

/// @brief Method get_HasCheckedForData, addr 0x182ef1c, size 0x8, virtual false, abstract: false, final false
inline bool get_HasCheckedForData() ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

/// @brief Method set_HasCheckedForData, addr 0x182ef24, size 0xc, virtual false, abstract: false, final false
inline void set_HasCheckedForData(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CheckLocalDataState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CheckLocalDataState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CheckLocalDataState(CheckLocalDataState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CheckLocalDataState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CheckLocalDataState(CheckLocalDataState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{313};

/// @brief Field _authManager, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::AuthenticationManager>  ____authManager;

/// @brief Field <HasCheckedForData>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____HasCheckedForData_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CheckLocalDataState, ____authManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::CheckLocalDataState, ____HasCheckedForData_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CheckLocalDataState, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::CheckLocalDataState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CheckLocalDataState*, "VROSC", "CheckLocalDataState");
