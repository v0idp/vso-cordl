#pragma once
// IWYU pragma private; include "VROSC/ScaleUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScaleUI)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace VROSC {
struct Note;
}
namespace VROSC {
class ScalePreset;
}
namespace VROSC {
class ScalePresets;
}
namespace VROSC {
class ScaleUI___c;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UISpinner;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
class ScaleUI;
}
namespace VROSC {
class ScaleUI___c;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ScaleUI);
MARK_REF_PTR_T(::VROSC::ScaleUI___c);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ScaleUI/<>c
class CORDL_TYPE ScaleUI___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::ScaleUI___c*  __9;

/// @brief Field <>9__5_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__5_0, put=setStaticF___9__5_0)) ::System::Func_2<::VROSC::Note,::StringW>*  __9__5_0;

static inline ::VROSC::ScaleUI___c* New_ctor() ;

/// @brief Method <Awake>b__5_0, addr 0x1747790, size 0x64, virtual false, abstract: false, final false
inline ::StringW _Awake_b__5_0(::VROSC::Note  x) ;

/// @brief Method .ctor, addr 0x1747788, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::ScaleUI___c* getStaticF___9() ;

static inline ::System::Func_2<::VROSC::Note,::StringW>* getStaticF___9__5_0() ;

static inline void setStaticF___9(::VROSC::ScaleUI___c*  value) ;

static inline void setStaticF___9__5_0(::System::Func_2<::VROSC::Note,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScaleUI___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScaleUI___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleUI___c(ScaleUI___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleUI___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleUI___c(ScaleUI___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1127};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::ScaleUI___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ScaleUI
class CORDL_TYPE ScaleUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::VROSC::ScaleUI___c;

/// @brief Field OnScalePresetChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnScalePresetChanged, put=setStaticF_OnScalePresetChanged)) ::System::Action_2<::VROSC::ScalePreset*,::VROSC::Note>*  OnScalePresetChanged;

/// @brief Field _noteSpinner, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteSpinner, put=__cordl_internal_set__noteSpinner)) ::UnityW<::VROSC::UISpinner>  _noteSpinner;

/// @brief Field _randomizeButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__randomizeButton, put=__cordl_internal_set__randomizeButton)) ::UnityW<::VROSC::UIButton>  _randomizeButton;

/// @brief Field _scalePresets, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__scalePresets, put=__cordl_internal_set__scalePresets)) ::UnityW<::VROSC::ScalePresets>  _scalePresets;

/// @brief Field _scaleSpinner, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaleSpinner, put=__cordl_internal_set__scaleSpinner)) ::UnityW<::VROSC::UISpinner>  _scaleSpinner;

/// @brief Method Awake, addr 0x1746a74, size 0x630, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::ScaleUI* New_ctor() ;

/// @brief Method NoteChanged, addr 0x174753c, size 0xf4, virtual false, abstract: false, final false
inline void NoteChanged(int32_t  selection) ;

/// @brief Method OnDestroy, addr 0x17470a4, size 0x2ac, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x1747350, size 0x3c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RandomizeScaleButtonPressed, addr 0x1747450, size 0xec, virtual false, abstract: false, final false
inline void RandomizeScaleButtonPressed() ;

/// @brief Method ScaleChanged, addr 0x1747630, size 0xf4, virtual false, abstract: false, final false
inline void ScaleChanged(int32_t  selection) ;

/// @brief Method UpdateSpinners, addr 0x1747390, size 0xc0, virtual false, abstract: false, final false
inline void UpdateSpinners() ;

/// @brief Method UserDataLoaded, addr 0x174738c, size 0x4, virtual false, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__noteSpinner() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__noteSpinner() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__randomizeButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__randomizeButton() ;

constexpr ::UnityW<::VROSC::ScalePresets> const& __cordl_internal_get__scalePresets() const;

constexpr ::UnityW<::VROSC::ScalePresets>& __cordl_internal_get__scalePresets() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__scaleSpinner() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__scaleSpinner() ;

constexpr void __cordl_internal_set__noteSpinner(::UnityW<::VROSC::UISpinner>  value) ;

constexpr void __cordl_internal_set__randomizeButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__scalePresets(::UnityW<::VROSC::ScalePresets>  value) ;

constexpr void __cordl_internal_set__scaleSpinner(::UnityW<::VROSC::UISpinner>  value) ;

/// @brief Method .ctor, addr 0x1747724, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_2<::VROSC::ScalePreset*,::VROSC::Note>* getStaticF_OnScalePresetChanged() ;

static inline void setStaticF_OnScalePresetChanged(::System::Action_2<::VROSC::ScalePreset*,::VROSC::Note>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScaleUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScaleUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleUI(ScaleUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleUI(ScaleUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1128};

/// @brief Field _randomizeButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____randomizeButton;

/// @brief Field _noteSpinner, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____noteSpinner;

/// @brief Field _scaleSpinner, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____scaleSpinner;

/// @brief Field _scalePresets, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::ScalePresets>  ____scalePresets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ScaleUI, ____randomizeButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleUI, ____noteSpinner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleUI, ____scaleSpinner) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleUI, ____scalePresets) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ScaleUI, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ScaleUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScaleUI*, "VROSC", "ScaleUI");
NEED_NO_BOX(::VROSC::ScaleUI___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScaleUI___c*, "VROSC", "ScaleUI/<>c");
