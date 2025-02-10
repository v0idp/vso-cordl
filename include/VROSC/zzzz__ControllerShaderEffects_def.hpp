#pragma once
// IWYU pragma private; include "VROSC/ControllerShaderEffects.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerShaderEffects)
namespace GlobalNamespace {
class Environment;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
namespace VROSC {
struct ControllerShaderEffects_ShaderSettings;
}
namespace VROSC {
class ControllerShaderEffects__FadeShader_d__33;
}
// Forward declare root types
namespace VROSC {
class ControllerShaderEffects;
}
namespace VROSC {
class ControllerShaderEffects__FadeShader_d__33;
}
namespace VROSC {
struct ControllerShaderEffects_ShaderSettings;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ControllerShaderEffects);
MARK_REF_PTR_T(::VROSC::ControllerShaderEffects__FadeShader_d__33);
MARK_VAL_T(::VROSC::ControllerShaderEffects_ShaderSettings);
// Dependencies UnityEngine.Color
namespace VROSC {
// Is value type: true
// CS Name: VROSC.ControllerShaderEffects/ShaderSettings
struct CORDL_TYPE ControllerShaderEffects_ShaderSettings {
public:
// Declarations
 __declspec(property(get=get_Bottom)) ::UnityEngine::Color  Bottom;

 __declspec(property(get=get_ControllerAlpha)) float_t  ControllerAlpha;

 __declspec(property(get=get_Grip)) ::UnityEngine::Color  Grip;

 __declspec(property(get=get_Menu)) ::UnityEngine::Color  Menu;

 __declspec(property(get=get_Special)) ::UnityEngine::Color  Special;

 __declspec(property(get=get_Stick)) ::UnityEngine::Color  Stick;

 __declspec(property(get=get_Top)) ::UnityEngine::Color  Top;

 __declspec(property(get=get_Trigger)) ::UnityEngine::Color  Trigger;

/// @brief Method .ctor, addr 0x17336f4, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Color  trigger, ::UnityEngine::Color  grip, ::UnityEngine::Color  top, ::UnityEngine::Color  bottom, ::UnityEngine::Color  menu, ::UnityEngine::Color  stick, ::UnityEngine::Color  special, float_t  controllerAlpha) ;

/// @brief Method get_Bottom, addr 0x1733924, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Bottom() ;

/// @brief Method get_ControllerAlpha, addr 0x1733954, size 0x8, virtual false, abstract: false, final false
inline float_t get_ControllerAlpha() ;

/// @brief Method get_Grip, addr 0x173390c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Grip() ;

/// @brief Method get_Menu, addr 0x1733930, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Menu() ;

/// @brief Method get_Special, addr 0x1733948, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Special() ;

/// @brief Method get_Stick, addr 0x173393c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Stick() ;

/// @brief Method get_Top, addr 0x1733918, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Top() ;

/// @brief Method get_Trigger, addr 0x1733900, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Trigger() ;

// Ctor Parameters []
// @brief default ctor
constexpr ControllerShaderEffects_ShaderSettings() ;

// Ctor Parameters [CppParam { name: "_Trigger_k__BackingField", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "_Grip_k__BackingField", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "_Top_k__BackingField", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "_Bottom_k__BackingField", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "_Menu_k__BackingField", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "_Stick_k__BackingField", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "_Special_k__BackingField", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "_ControllerAlpha_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
constexpr ControllerShaderEffects_ShaderSettings(::UnityEngine::Color  _Trigger_k__BackingField, ::UnityEngine::Color  _Grip_k__BackingField, ::UnityEngine::Color  _Top_k__BackingField, ::UnityEngine::Color  _Bottom_k__BackingField, ::UnityEngine::Color  _Menu_k__BackingField, ::UnityEngine::Color  _Stick_k__BackingField, ::UnityEngine::Color  _Special_k__BackingField, float_t  _ControllerAlpha_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1069};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x74};

/// @brief Field <Trigger>k__BackingField, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Color  _Trigger_k__BackingField;

/// @brief Field <Grip>k__BackingField, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  _Grip_k__BackingField;

/// @brief Field <Top>k__BackingField, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  _Top_k__BackingField;

/// @brief Field <Bottom>k__BackingField, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  _Bottom_k__BackingField;

/// @brief Field <Menu>k__BackingField, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  _Menu_k__BackingField;

/// @brief Field <Stick>k__BackingField, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  _Stick_k__BackingField;

/// @brief Field <Special>k__BackingField, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  _Special_k__BackingField;

/// @brief Field <ControllerAlpha>k__BackingField, offset: 0x70, size: 0x4, def value: None
 float_t  _ControllerAlpha_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ControllerShaderEffects_ShaderSettings, _Trigger_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects_ShaderSettings, _Grip_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects_ShaderSettings, _Top_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects_ShaderSettings, _Bottom_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects_ShaderSettings, _Menu_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects_ShaderSettings, _Stick_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects_ShaderSettings, _Special_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects_ShaderSettings, _ControllerAlpha_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ControllerShaderEffects_ShaderSettings, 0x74>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ControllerShaderEffects/<FadeShader>d__33
class CORDL_TYPE ControllerShaderEffects__FadeShader_d__33 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::ControllerShaderEffects>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1733960, size 0x184, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::ControllerShaderEffects__FadeShader_d__33* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1733ae4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1733aec, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1733b24, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x173395c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::ControllerShaderEffects> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::ControllerShaderEffects>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::ControllerShaderEffects>  value) ;

/// @brief Method .ctor, addr 0x1733868, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerShaderEffects__FadeShader_d__33() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerShaderEffects__FadeShader_d__33", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerShaderEffects__FadeShader_d__33(ControllerShaderEffects__FadeShader_d__33 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerShaderEffects__FadeShader_d__33", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerShaderEffects__FadeShader_d__33(ControllerShaderEffects__FadeShader_d__33 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1070};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerShaderEffects>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ControllerShaderEffects__FadeShader_d__33, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects__FadeShader_d__33, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects__FadeShader_d__33, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ControllerShaderEffects__FadeShader_d__33, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ControllerShaderEffects
class CORDL_TYPE ControllerShaderEffects : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ShaderSettings = ::VROSC::ControllerShaderEffects_ShaderSettings;

using _FadeShader_d__33 = ::VROSC::ControllerShaderEffects__FadeShader_d__33;

 __declspec(property(get=get_ControllerAlpha, put=set_ControllerAlpha)) float_t  ControllerAlpha;

/// @brief Field _alphaBlendDuration, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get__alphaBlendDuration, put=__cordl_internal_set__alphaBlendDuration)) float_t  _alphaBlendDuration;

/// @brief Field _alphaFadeInEffect, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__alphaFadeInEffect, put=__cordl_internal_set__alphaFadeInEffect)) ::UnityEngine::AnimationCurve*  _alphaFadeInEffect;

/// @brief Field _alphaFadeOutEffect, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__alphaFadeOutEffect, put=__cordl_internal_set__alphaFadeOutEffect)) ::UnityEngine::AnimationCurve*  _alphaFadeOutEffect;

/// @brief Field _bottomButton, offset 0x6c, size 0x10 
 __declspec(property(get=__cordl_internal_get__bottomButton, put=__cordl_internal_set__bottomButton)) ::UnityEngine::Color  _bottomButton;

/// @brief Field _controllerAlpha, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get__controllerAlpha, put=__cordl_internal_set__controllerAlpha)) float_t  _controllerAlpha;

/// @brief Field _fadeFinished, offset 0xe1, size 0x1 
 __declspec(property(get=__cordl_internal_get__fadeFinished, put=__cordl_internal_set__fadeFinished)) bool  _fadeFinished;

/// @brief Field _fadeOut, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get__fadeOut, put=__cordl_internal_set__fadeOut)) bool  _fadeOut;

/// @brief Field _fadeTimer, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeTimer, put=__cordl_internal_set__fadeTimer)) float_t  _fadeTimer;

/// @brief Field _gripButton, offset 0x4c, size 0x10 
 __declspec(property(get=__cordl_internal_get__gripButton, put=__cordl_internal_set__gripButton)) ::UnityEngine::Color  _gripButton;

/// @brief Field _maxAlpha, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAlpha, put=__cordl_internal_set__maxAlpha)) float_t  _maxAlpha;

/// @brief Field _menuButton, offset 0x7c, size 0x10 
 __declspec(property(get=__cordl_internal_get__menuButton, put=__cordl_internal_set__menuButton)) ::UnityEngine::Color  _menuButton;

/// @brief Field _minAlpha, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__minAlpha, put=__cordl_internal_set__minAlpha)) float_t  _minAlpha;

/// @brief Field _normalMaterial, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__normalMaterial, put=__cordl_internal_set__normalMaterial)) ::UnityW<::UnityEngine::Material>  _normalMaterial;

/// @brief Field _passThroughMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__passThroughMaterial, put=__cordl_internal_set__passThroughMaterial)) ::UnityW<::UnityEngine::Material>  _passThroughMaterial;

/// @brief Field _preview, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__preview, put=__cordl_internal_set__preview)) bool  _preview;

/// @brief Field _propBlock, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__propBlock, put=__cordl_internal_set__propBlock)) ::UnityEngine::MaterialPropertyBlock*  _propBlock;

/// @brief Field _renderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _special, offset 0x9c, size 0x10 
 __declspec(property(get=__cordl_internal_get__special, put=__cordl_internal_set__special)) ::UnityEngine::Color  _special;

/// @brief Field _thumbstick, offset 0x8c, size 0x10 
 __declspec(property(get=__cordl_internal_get__thumbstick, put=__cordl_internal_set__thumbstick)) ::UnityEngine::Color  _thumbstick;

/// @brief Field _topButton, offset 0x5c, size 0x10 
 __declspec(property(get=__cordl_internal_get__topButton, put=__cordl_internal_set__topButton)) ::UnityEngine::Color  _topButton;

/// @brief Field _transparencyMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__transparencyMaterial, put=__cordl_internal_set__transparencyMaterial)) ::UnityW<::UnityEngine::Material>  _transparencyMaterial;

/// @brief Field _triggerButton, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get__triggerButton, put=__cordl_internal_set__triggerButton)) ::UnityEngine::Color  _triggerButton;

/// @brief Method Awake, addr 0x17330f8, size 0x140, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreatePropBlock, addr 0x1733728, size 0x60, virtual false, abstract: false, final false
inline void CreatePropBlock() ;

/// @brief Method FadeOutEffect, addr 0x1733788, size 0x80, virtual false, abstract: false, final false
inline void FadeOutEffect(bool  fadeOut) ;

/// @brief Method FadeShader, addr 0x1733808, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* FadeShader() ;

static inline ::VROSC::ControllerShaderEffects* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17332ec, size 0x128, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x1733414, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnNewEnvironment, addr 0x1733238, size 0xb4, virtual false, abstract: false, final false
inline void OnNewEnvironment(::GlobalNamespace::Environment*  environment) ;

/// @brief Method SetEffectOnShader, addr 0x1733464, size 0x1c8, virtual false, abstract: false, final false
inline void SetEffectOnShader(::VROSC::ControllerShaderEffects_ShaderSettings  settings) ;

/// @brief Method Update, addr 0x173362c, size 0xc8, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__alphaBlendDuration() const;

constexpr float_t& __cordl_internal_get__alphaBlendDuration() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__alphaFadeInEffect() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__alphaFadeInEffect() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__alphaFadeOutEffect() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__alphaFadeOutEffect() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__bottomButton() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__bottomButton() ;

constexpr float_t const& __cordl_internal_get__controllerAlpha() const;

constexpr float_t& __cordl_internal_get__controllerAlpha() ;

constexpr bool const& __cordl_internal_get__fadeFinished() const;

constexpr bool& __cordl_internal_get__fadeFinished() ;

constexpr bool const& __cordl_internal_get__fadeOut() const;

constexpr bool& __cordl_internal_get__fadeOut() ;

constexpr float_t const& __cordl_internal_get__fadeTimer() const;

constexpr float_t& __cordl_internal_get__fadeTimer() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__gripButton() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__gripButton() ;

constexpr float_t const& __cordl_internal_get__maxAlpha() const;

constexpr float_t& __cordl_internal_get__maxAlpha() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__menuButton() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__menuButton() ;

constexpr float_t const& __cordl_internal_get__minAlpha() const;

constexpr float_t& __cordl_internal_get__minAlpha() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__normalMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__normalMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__passThroughMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__passThroughMaterial() ;

constexpr bool const& __cordl_internal_get__preview() const;

constexpr bool& __cordl_internal_get__preview() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__propBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__propBlock() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__special() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__special() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__thumbstick() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__thumbstick() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__topButton() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__topButton() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__transparencyMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__transparencyMaterial() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__triggerButton() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__triggerButton() ;

constexpr void __cordl_internal_set__alphaBlendDuration(float_t  value) ;

constexpr void __cordl_internal_set__alphaFadeInEffect(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__alphaFadeOutEffect(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__bottomButton(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__controllerAlpha(float_t  value) ;

constexpr void __cordl_internal_set__fadeFinished(bool  value) ;

constexpr void __cordl_internal_set__fadeOut(bool  value) ;

constexpr void __cordl_internal_set__fadeTimer(float_t  value) ;

constexpr void __cordl_internal_set__gripButton(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__maxAlpha(float_t  value) ;

constexpr void __cordl_internal_set__menuButton(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__minAlpha(float_t  value) ;

constexpr void __cordl_internal_set__normalMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__passThroughMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__preview(bool  value) ;

constexpr void __cordl_internal_set__propBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__special(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__thumbstick(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__topButton(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__transparencyMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__triggerButton(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x1733890, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ControllerAlpha, addr 0x17330ec, size 0x8, virtual false, abstract: false, final false
inline float_t get_ControllerAlpha() ;

/// @brief Method set_ControllerAlpha, addr 0x17330f4, size 0x4, virtual false, abstract: false, final false
inline void set_ControllerAlpha(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerShaderEffects() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerShaderEffects", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerShaderEffects(ControllerShaderEffects && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerShaderEffects", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerShaderEffects(ControllerShaderEffects const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1071};

/// @brief Field _renderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// @brief Field _transparencyMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____transparencyMaterial;

/// @brief Field _passThroughMaterial, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____passThroughMaterial;

/// @brief Field _preview, offset: 0x38, size: 0x1, def value: None
 bool  ____preview;

/// @brief Field _triggerButton, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Color  ____triggerButton;

/// @brief Field _gripButton, offset: 0x4c, size: 0x10, def value: None
 ::UnityEngine::Color  ____gripButton;

/// @brief Field _topButton, offset: 0x5c, size: 0x10, def value: None
 ::UnityEngine::Color  ____topButton;

/// @brief Field _bottomButton, offset: 0x6c, size: 0x10, def value: None
 ::UnityEngine::Color  ____bottomButton;

/// @brief Field _menuButton, offset: 0x7c, size: 0x10, def value: None
 ::UnityEngine::Color  ____menuButton;

/// @brief Field _thumbstick, offset: 0x8c, size: 0x10, def value: None
 ::UnityEngine::Color  ____thumbstick;

/// @brief Field _special, offset: 0x9c, size: 0x10, def value: None
 ::UnityEngine::Color  ____special;

/// @brief Field _controllerAlpha, offset: 0xac, size: 0x4, def value: None
 float_t  ____controllerAlpha;

/// @brief Field _alphaFadeInEffect, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____alphaFadeInEffect;

/// @brief Field _alphaFadeOutEffect, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____alphaFadeOutEffect;

/// @brief Field _minAlpha, offset: 0xc0, size: 0x4, def value: None
 float_t  ____minAlpha;

/// @brief Field _maxAlpha, offset: 0xc4, size: 0x4, def value: None
 float_t  ____maxAlpha;

/// @brief Field _propBlock, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____propBlock;

/// @brief Field _alphaBlendDuration, offset: 0xd0, size: 0x4, def value: None
 float_t  ____alphaBlendDuration;

/// @brief Field _normalMaterial, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____normalMaterial;

/// @brief Field _fadeOut, offset: 0xe0, size: 0x1, def value: None
 bool  ____fadeOut;

/// @brief Field _fadeFinished, offset: 0xe1, size: 0x1, def value: None
 bool  ____fadeFinished;

/// @brief Field _fadeTimer, offset: 0xe4, size: 0x4, def value: None
 float_t  ____fadeTimer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ControllerShaderEffects, ____renderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____transparencyMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____passThroughMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____preview) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____triggerButton) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____gripButton) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____topButton) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____bottomButton) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____menuButton) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____thumbstick) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____special) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____controllerAlpha) == 0xac, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____alphaFadeInEffect) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____alphaFadeOutEffect) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____minAlpha) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____maxAlpha) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____propBlock) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____alphaBlendDuration) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____normalMaterial) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____fadeOut) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____fadeFinished) == 0xe1, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerShaderEffects, ____fadeTimer) == 0xe4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ControllerShaderEffects, 0xe8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ControllerShaderEffects);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ControllerShaderEffects*, "VROSC", "ControllerShaderEffects");
NEED_NO_BOX(::VROSC::ControllerShaderEffects__FadeShader_d__33);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ControllerShaderEffects__FadeShader_d__33*, "VROSC", "ControllerShaderEffects/<FadeShader>d__33");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ControllerShaderEffects_ShaderSettings, "VROSC", "ControllerShaderEffects/ShaderSettings");
