#pragma once
// IWYU pragma private; include "VROSC/EnvironmentData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnvironmentData)
namespace GlobalNamespace {
class Environment;
}
namespace UnityEngine {
class Cubemap;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class Texture2D;
}
namespace VROSC::UI {
class UIScheme;
}
// Forward declare root types
namespace VROSC {
class EnvironmentData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::EnvironmentData);
// Dependencies UnityEngine.ScriptableObject
namespace VROSC {
// Is value type: false
// CS Name: VROSC.EnvironmentData
class CORDL_TYPE EnvironmentData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_BassEffect)) float_t  BassEffect;

 __declspec(property(get=get_DefaultUIScheme)) ::UnityW<::VROSC::UI::UIScheme>  DefaultUIScheme;

 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_EffectsAmount)) float_t  EffectsAmount;

 __declspec(property(get=get_LaserGradient)) ::UnityEngine::Gradient*  LaserGradient;

 __declspec(property(get=get_MidEffect)) float_t  MidEffect;

 __declspec(property(get=get_PassThrough)) bool  PassThrough;

 __declspec(property(get=get_Prefab)) ::UnityW<::GlobalNamespace::Environment>  Prefab;

 __declspec(property(get=get_PreviewImage)) ::UnityW<::UnityEngine::Texture2D>  PreviewImage;

 __declspec(property(get=get_ReflectionCube)) ::UnityW<::UnityEngine::Cubemap>  ReflectionCube;

 __declspec(property(get=get_TopEffect)) float_t  TopEffect;

 __declspec(property(get=get_UIScheme, put=set_UIScheme)) ::UnityW<::VROSC::UI::UIScheme>  UIScheme;

/// @brief Field <UIScheme>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__UIScheme_k__BackingField, put=__cordl_internal_set__UIScheme_k__BackingField)) ::UnityW<::VROSC::UI::UIScheme>  _UIScheme_k__BackingField;

/// @brief Field _bass, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__bass, put=__cordl_internal_set__bass)) float_t  _bass;

 __declspec(property(get=get_ID)) ::StringW  _cordl_ID;

/// @brief Field _displayName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__displayName, put=__cordl_internal_set__displayName)) ::StringW  _displayName;

/// @brief Field _effectsAmount, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__effectsAmount, put=__cordl_internal_set__effectsAmount)) float_t  _effectsAmount;

/// @brief Field _id, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) ::StringW  _id;

/// @brief Field _laserGradient, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__laserGradient, put=__cordl_internal_set__laserGradient)) ::UnityEngine::Gradient*  _laserGradient;

/// @brief Field _mid, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__mid, put=__cordl_internal_set__mid)) float_t  _mid;

/// @brief Field _passThrough, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__passThrough, put=__cordl_internal_set__passThrough)) bool  _passThrough;

/// @brief Field _prefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__prefab, put=__cordl_internal_set__prefab)) ::UnityW<::GlobalNamespace::Environment>  _prefab;

/// @brief Field _previewImage, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__previewImage, put=__cordl_internal_set__previewImage)) ::UnityW<::UnityEngine::Texture2D>  _previewImage;

/// @brief Field _reflectionCube, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__reflectionCube, put=__cordl_internal_set__reflectionCube)) ::UnityW<::UnityEngine::Cubemap>  _reflectionCube;

/// @brief Field _sceneUiScheme, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__sceneUiScheme, put=__cordl_internal_set__sceneUiScheme)) ::UnityW<::VROSC::UI::UIScheme>  _sceneUiScheme;

/// @brief Field _top, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__top, put=__cordl_internal_set__top)) float_t  _top;

static inline ::VROSC::EnvironmentData* New_ctor() ;

constexpr ::UnityW<::VROSC::UI::UIScheme> const& __cordl_internal_get__UIScheme_k__BackingField() const;

constexpr ::UnityW<::VROSC::UI::UIScheme>& __cordl_internal_get__UIScheme_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__bass() const;

constexpr float_t& __cordl_internal_get__bass() ;

constexpr ::StringW const& __cordl_internal_get__displayName() const;

constexpr ::StringW& __cordl_internal_get__displayName() ;

constexpr float_t const& __cordl_internal_get__effectsAmount() const;

constexpr float_t& __cordl_internal_get__effectsAmount() ;

constexpr ::StringW const& __cordl_internal_get__id() const;

constexpr ::StringW& __cordl_internal_get__id() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get__laserGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get__laserGradient() ;

constexpr float_t const& __cordl_internal_get__mid() const;

constexpr float_t& __cordl_internal_get__mid() ;

constexpr bool const& __cordl_internal_get__passThrough() const;

constexpr bool& __cordl_internal_get__passThrough() ;

constexpr ::UnityW<::GlobalNamespace::Environment> const& __cordl_internal_get__prefab() const;

constexpr ::UnityW<::GlobalNamespace::Environment>& __cordl_internal_get__prefab() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__previewImage() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__previewImage() ;

constexpr ::UnityW<::UnityEngine::Cubemap> const& __cordl_internal_get__reflectionCube() const;

constexpr ::UnityW<::UnityEngine::Cubemap>& __cordl_internal_get__reflectionCube() ;

constexpr ::UnityW<::VROSC::UI::UIScheme> const& __cordl_internal_get__sceneUiScheme() const;

constexpr ::UnityW<::VROSC::UI::UIScheme>& __cordl_internal_get__sceneUiScheme() ;

constexpr float_t const& __cordl_internal_get__top() const;

constexpr float_t& __cordl_internal_get__top() ;

constexpr void __cordl_internal_set__UIScheme_k__BackingField(::UnityW<::VROSC::UI::UIScheme>  value) ;

constexpr void __cordl_internal_set__bass(float_t  value) ;

constexpr void __cordl_internal_set__displayName(::StringW  value) ;

constexpr void __cordl_internal_set__effectsAmount(float_t  value) ;

constexpr void __cordl_internal_set__id(::StringW  value) ;

constexpr void __cordl_internal_set__laserGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set__mid(float_t  value) ;

constexpr void __cordl_internal_set__passThrough(bool  value) ;

constexpr void __cordl_internal_set__prefab(::UnityW<::GlobalNamespace::Environment>  value) ;

constexpr void __cordl_internal_set__previewImage(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__reflectionCube(::UnityW<::UnityEngine::Cubemap>  value) ;

constexpr void __cordl_internal_set__sceneUiScheme(::UnityW<::VROSC::UI::UIScheme>  value) ;

constexpr void __cordl_internal_set__top(float_t  value) ;

/// @brief Method .ctor, addr 0x1714b84, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BassEffect, addr 0x1714b34, size 0x8, virtual false, abstract: false, final false
inline float_t get_BassEffect() ;

/// @brief Method get_DefaultUIScheme, addr 0x1714b54, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UI::UIScheme> get_DefaultUIScheme() ;

/// @brief Method get_DisplayName, addr 0x1714b24, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_EffectsAmount, addr 0x1714b4c, size 0x8, virtual false, abstract: false, final false
inline float_t get_EffectsAmount() ;

/// @brief Method get_ID, addr 0x1714b2c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ID() ;

/// @brief Method get_LaserGradient, addr 0x1714b7c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Gradient* get_LaserGradient() ;

/// @brief Method get_MidEffect, addr 0x1714b3c, size 0x8, virtual false, abstract: false, final false
inline float_t get_MidEffect() ;

/// @brief Method get_PassThrough, addr 0x1714b74, size 0x8, virtual false, abstract: false, final false
inline bool get_PassThrough() ;

/// @brief Method get_Prefab, addr 0x1714b14, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::Environment> get_Prefab() ;

/// @brief Method get_PreviewImage, addr 0x1714b1c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_PreviewImage() ;

/// @brief Method get_ReflectionCube, addr 0x1714b6c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Cubemap> get_ReflectionCube() ;

/// @brief Method get_TopEffect, addr 0x1714b44, size 0x8, virtual false, abstract: false, final false
inline float_t get_TopEffect() ;

/// @brief Method get_UIScheme, addr 0x1714b5c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UI::UIScheme> get_UIScheme() ;

/// @brief Method set_UIScheme, addr 0x1714b64, size 0x8, virtual false, abstract: false, final false
inline void set_UIScheme(::VROSC::UI::UIScheme*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentData(EnvironmentData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentData(EnvironmentData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{907};

/// @brief Field <UIScheme>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIScheme>  ____UIScheme_k__BackingField;

/// @brief Field _prefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Environment>  ____prefab;

/// @brief Field _passThrough, offset: 0x28, size: 0x1, def value: None
 bool  ____passThrough;

/// @brief Field _previewImage, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____previewImage;

/// @brief Field _displayName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____displayName;

/// @brief Field _id, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____id;

/// @brief Field _bass, offset: 0x48, size: 0x4, def value: None
 float_t  ____bass;

/// @brief Field _mid, offset: 0x4c, size: 0x4, def value: None
 float_t  ____mid;

/// @brief Field _top, offset: 0x50, size: 0x4, def value: None
 float_t  ____top;

/// @brief Field _sceneUiScheme, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIScheme>  ____sceneUiScheme;

/// @brief Field _reflectionCube, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Cubemap>  ____reflectionCube;

/// @brief Field _effectsAmount, offset: 0x68, size: 0x4, def value: None
 float_t  ____effectsAmount;

/// @brief Field _laserGradient, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ____laserGradient;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::EnvironmentData, ____UIScheme_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentData, ____prefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentData, ____passThrough) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentData, ____previewImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentData, ____displayName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentData, ____id) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentData, ____bass) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentData, ____mid) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentData, ____top) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentData, ____sceneUiScheme) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentData, ____reflectionCube) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentData, ____effectsAmount) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentData, ____laserGradient) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::EnvironmentData, 0x78>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::EnvironmentData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EnvironmentData*, "VROSC", "EnvironmentData");
