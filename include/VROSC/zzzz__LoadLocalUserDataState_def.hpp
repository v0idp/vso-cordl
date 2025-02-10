#pragma once
// IWYU pragma private; include "VROSC/LoadLocalUserDataState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
CORDL_MODULE_EXPORT(LoadLocalUserDataState)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class InstrumentHub;
}
namespace VROSC {
class LoadLocalUserDataState___c;
}
namespace VROSC {
class SettingsDataDefaults;
}
// Forward declare root types
namespace VROSC {
class LoadLocalUserDataState;
}
namespace VROSC {
class LoadLocalUserDataState___c;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoadLocalUserDataState);
MARK_REF_PTR_T(::VROSC::LoadLocalUserDataState___c);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoadLocalUserDataState/<>c
class CORDL_TYPE LoadLocalUserDataState___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::LoadLocalUserDataState___c*  __9;

/// @brief Field <>9__3_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_1, put=setStaticF___9__3_1)) ::System::Action_1<::VROSC::Error>*  __9__3_1;

static inline ::VROSC::LoadLocalUserDataState___c* New_ctor() ;

/// @brief Method <OnEnter>b__3_1, addr 0x16f8e70, size 0xcc, virtual false, abstract: false, final false
inline void _OnEnter_b__3_1(::VROSC::Error  error) ;

/// @brief Method .ctor, addr 0x16f8e68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::LoadLocalUserDataState___c* getStaticF___9() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF___9__3_1() ;

static inline void setStaticF___9(::VROSC::LoadLocalUserDataState___c*  value) ;

static inline void setStaticF___9__3_1(::System::Action_1<::VROSC::Error>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadLocalUserDataState___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadLocalUserDataState___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadLocalUserDataState___c(LoadLocalUserDataState___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadLocalUserDataState___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadLocalUserDataState___c(LoadLocalUserDataState___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{803};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::LoadLocalUserDataState___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoadLocalUserDataState
class CORDL_TYPE LoadLocalUserDataState : public ::System::Object {
public:
// Declarations
using __c = ::VROSC::LoadLocalUserDataState___c;

/// @brief Field _instrumentHub, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrumentHub, put=__cordl_internal_set__instrumentHub)) ::UnityW<::VROSC::InstrumentHub>  _instrumentHub;

/// @brief Field _settingsDataDefaults, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsDataDefaults, put=__cordl_internal_set__settingsDataDefaults)) ::UnityW<::VROSC::SettingsDataDefaults>  _settingsDataDefaults;

/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

static inline ::VROSC::LoadLocalUserDataState* New_ctor(::VROSC::SettingsDataDefaults*  settingsDataDefaults, ::VROSC::InstrumentHub*  instrumentHub) ;

/// @brief Method OnEnter, addr 0x16f8bd8, size 0x194, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x16f8d6c, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x16f8d70, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x16f8d74, size 0x4, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method <OnEnter>b__3_0, addr 0x16f8d78, size 0x94, virtual false, abstract: false, final false
inline void _OnEnter_b__3_0() ;

constexpr ::UnityW<::VROSC::InstrumentHub> const& __cordl_internal_get__instrumentHub() const;

constexpr ::UnityW<::VROSC::InstrumentHub>& __cordl_internal_get__instrumentHub() ;

constexpr ::UnityW<::VROSC::SettingsDataDefaults> const& __cordl_internal_get__settingsDataDefaults() const;

constexpr ::UnityW<::VROSC::SettingsDataDefaults>& __cordl_internal_get__settingsDataDefaults() ;

constexpr void __cordl_internal_set__instrumentHub(::UnityW<::VROSC::InstrumentHub>  value) ;

constexpr void __cordl_internal_set__settingsDataDefaults(::UnityW<::VROSC::SettingsDataDefaults>  value) ;

/// @brief Method .ctor, addr 0x16f8bac, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::VROSC::SettingsDataDefaults*  settingsDataDefaults, ::VROSC::InstrumentHub*  instrumentHub) ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadLocalUserDataState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadLocalUserDataState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadLocalUserDataState(LoadLocalUserDataState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadLocalUserDataState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadLocalUserDataState(LoadLocalUserDataState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{804};

/// @brief Field _settingsDataDefaults, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::SettingsDataDefaults>  ____settingsDataDefaults;

/// @brief Field _instrumentHub, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::InstrumentHub>  ____instrumentHub;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoadLocalUserDataState, ____settingsDataDefaults) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoadLocalUserDataState, ____instrumentHub) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoadLocalUserDataState, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoadLocalUserDataState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoadLocalUserDataState*, "VROSC", "LoadLocalUserDataState");
NEED_NO_BOX(::VROSC::LoadLocalUserDataState___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoadLocalUserDataState___c*, "VROSC", "LoadLocalUserDataState/<>c");
