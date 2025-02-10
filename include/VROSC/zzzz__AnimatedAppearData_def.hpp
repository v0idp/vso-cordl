#pragma once
// IWYU pragma private; include "VROSC/AnimatedAppearData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AnimatedAppearData)
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
namespace VROSC {
class AdjustableMesh;
}
namespace VROSC {
class AnimatedAppearData_AdjustableMeshAppear;
}
namespace VROSC {
class AnimatedAppearData_AppearingObject;
}
namespace VROSC {
class AnimatedAppearData_SimpleAppear;
}
namespace VROSC {
class AnimatedAppearData_TextMeshAppear;
}
namespace VROSC {
struct AnimatedAppear_Mode;
}
namespace VROSC {
class Interactable;
}
namespace VROSC {
class MinMaxVector2;
}
namespace VROSC {
class SimpleAppearObject;
}
// Forward declare root types
namespace VROSC {
class AnimatedAppearData;
}
namespace VROSC {
class AnimatedAppearData_AdjustableMeshAppear;
}
namespace VROSC {
class AnimatedAppearData_AppearingObject;
}
namespace VROSC {
class AnimatedAppearData_SimpleAppear;
}
namespace VROSC {
class AnimatedAppearData_TextMeshAppear;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AnimatedAppearData);
MARK_REF_PTR_T(::VROSC::AnimatedAppearData_AdjustableMeshAppear);
MARK_REF_PTR_T(::VROSC::AnimatedAppearData_AppearingObject);
MARK_REF_PTR_T(::VROSC::AnimatedAppearData_SimpleAppear);
MARK_REF_PTR_T(::VROSC::AnimatedAppearData_TextMeshAppear);
// Dependencies System.Object, UnityEngine.Vector2
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AnimatedAppearData/AppearingObject
class CORDL_TYPE AnimatedAppearData_AppearingObject : public ::System::Object {
public:
// Declarations
/// @brief Field _appear, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__appear, put=__cordl_internal_set__appear)) ::UnityEngine::Vector2  _appear;

/// @brief Field _minMax, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__minMax, put=__cordl_internal_set__minMax)) ::VROSC::MinMaxVector2*  _minMax;

static inline ::VROSC::AnimatedAppearData_AppearingObject* New_ctor(::VROSC::MinMaxVector2*  minMax) ;

/// @brief Method Update, addr 0x17a980c, size 0xc0, virtual false, abstract: false, final false
inline void Update(::UnityEngine::Vector2  amount, bool  useFlash, bool  force, ::VROSC::AnimatedAppear_Mode  mode) ;

/// @brief Method UpdateObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateObject(::VROSC::AnimatedAppear_Mode  mode, bool  useFlash) ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__appear() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__appear() ;

constexpr ::VROSC::MinMaxVector2* const& __cordl_internal_get__minMax() const;

constexpr ::VROSC::MinMaxVector2*& __cordl_internal_get__minMax() ;

constexpr void __cordl_internal_set__appear(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__minMax(::VROSC::MinMaxVector2*  value) ;

/// @brief Method .ctor, addr 0x17a9a34, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::VROSC::MinMaxVector2*  minMax) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatedAppearData_AppearingObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatedAppearData_AppearingObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatedAppearData_AppearingObject(AnimatedAppearData_AppearingObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedAppearData_AppearingObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatedAppearData_AppearingObject(AnimatedAppearData_AppearingObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1399};

/// @brief Field _minMax, offset: 0x10, size: 0x8, def value: None
 ::VROSC::MinMaxVector2*  ____minMax;

/// @brief Field _appear, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____appear;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AnimatedAppearData_AppearingObject, ____minMax) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppearData_AppearingObject, ____appear) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AnimatedAppearData_AppearingObject, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Color, VROSC.AnimatedAppearData::AppearingObject
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AnimatedAppearData/TextMeshAppear
class CORDL_TYPE AnimatedAppearData_TextMeshAppear : public ::VROSC::AnimatedAppearData_AppearingObject {
public:
// Declarations
/// @brief Field _color, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::UnityEngine::Color  _color;

/// @brief Field _textMesh, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__textMesh, put=__cordl_internal_set__textMesh)) ::UnityW<::TMPro::TextMeshPro>  _textMesh;

static inline ::VROSC::AnimatedAppearData_TextMeshAppear* New_ctor(::TMPro::TextMeshPro*  textMesh, ::VROSC::MinMaxVector2*  minMax) ;

/// @brief Method UpdateObject, addr 0x17a9a94, size 0x44, virtual true, abstract: false, final false
inline void UpdateObject(::VROSC::AnimatedAppear_Mode  mode, bool  useFlash) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__textMesh() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__textMesh() ;

constexpr void __cordl_internal_set__color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__textMesh(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x17a9434, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::TMPro::TextMeshPro*  textMesh, ::VROSC::MinMaxVector2*  minMax) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatedAppearData_TextMeshAppear() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatedAppearData_TextMeshAppear", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatedAppearData_TextMeshAppear(AnimatedAppearData_TextMeshAppear && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedAppearData_TextMeshAppear", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatedAppearData_TextMeshAppear(AnimatedAppearData_TextMeshAppear const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1400};

/// @brief Field _textMesh, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____textMesh;

/// @brief Field _color, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ____color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AnimatedAppearData_TextMeshAppear, ____textMesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppearData_TextMeshAppear, ____color) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AnimatedAppearData_TextMeshAppear, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.AnimatedAppearData::AppearingObject
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AnimatedAppearData/AdjustableMeshAppear
class CORDL_TYPE AnimatedAppearData_AdjustableMeshAppear : public ::VROSC::AnimatedAppearData_AppearingObject {
public:
// Declarations
/// @brief Field _adjustableMesh, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__adjustableMesh, put=__cordl_internal_set__adjustableMesh)) ::UnityW<::VROSC::AdjustableMesh>  _adjustableMesh;

static inline ::VROSC::AnimatedAppearData_AdjustableMeshAppear* New_ctor(::VROSC::AdjustableMesh*  adjustableMesh, ::VROSC::MinMaxVector2*  minMax) ;

/// @brief Method UpdateObject, addr 0x17a9ad8, size 0x3c, virtual true, abstract: false, final false
inline void UpdateObject(::VROSC::AnimatedAppear_Mode  mode, bool  useFlash) ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__adjustableMesh() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__adjustableMesh() ;

constexpr void __cordl_internal_set__adjustableMesh(::UnityW<::VROSC::AdjustableMesh>  value) ;

/// @brief Method .ctor, addr 0x17a9640, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::VROSC::AdjustableMesh*  adjustableMesh, ::VROSC::MinMaxVector2*  minMax) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatedAppearData_AdjustableMeshAppear() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatedAppearData_AdjustableMeshAppear", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatedAppearData_AdjustableMeshAppear(AnimatedAppearData_AdjustableMeshAppear && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedAppearData_AdjustableMeshAppear", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatedAppearData_AdjustableMeshAppear(AnimatedAppearData_AdjustableMeshAppear const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1401};

/// @brief Field _adjustableMesh, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____adjustableMesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AnimatedAppearData_AdjustableMeshAppear, ____adjustableMesh) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AnimatedAppearData_AdjustableMeshAppear, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.AnimatedAppearData::AppearingObject
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AnimatedAppearData/SimpleAppear
class CORDL_TYPE AnimatedAppearData_SimpleAppear : public ::VROSC::AnimatedAppearData_AppearingObject {
public:
// Declarations
/// @brief Field _target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::VROSC::SimpleAppearObject>  _target;

static inline ::VROSC::AnimatedAppearData_SimpleAppear* New_ctor(::VROSC::SimpleAppearObject*  target, ::VROSC::MinMaxVector2*  minMax) ;

/// @brief Method UpdateObject, addr 0x17a9b14, size 0x30, virtual true, abstract: false, final false
inline void UpdateObject(::VROSC::AnimatedAppear_Mode  mode, bool  useFlash) ;

constexpr ::UnityW<::VROSC::SimpleAppearObject> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::VROSC::SimpleAppearObject>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__target(::UnityW<::VROSC::SimpleAppearObject>  value) ;

/// @brief Method .ctor, addr 0x17a97e4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::VROSC::SimpleAppearObject*  target, ::VROSC::MinMaxVector2*  minMax) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatedAppearData_SimpleAppear() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatedAppearData_SimpleAppear", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatedAppearData_SimpleAppear(AnimatedAppearData_SimpleAppear && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedAppearData_SimpleAppear", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatedAppearData_SimpleAppear(AnimatedAppearData_SimpleAppear const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1402};

/// @brief Field _target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::SimpleAppearObject>  ____target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AnimatedAppearData_SimpleAppear, ____target) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AnimatedAppearData_SimpleAppear, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AnimatedAppearData
class CORDL_TYPE AnimatedAppearData : public ::System::Object {
public:
// Declarations
using AdjustableMeshAppear = ::VROSC::AnimatedAppearData_AdjustableMeshAppear;

using AppearingObject = ::VROSC::AnimatedAppearData_AppearingObject;

using SimpleAppear = ::VROSC::AnimatedAppearData_SimpleAppear;

using TextMeshAppear = ::VROSC::AnimatedAppearData_TextMeshAppear;

/// @brief Field _adjustableMeshes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__adjustableMeshes, put=__cordl_internal_set__adjustableMeshes)) ::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*>  _adjustableMeshes;

/// @brief Field _interactables, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactables, put=__cordl_internal_set__interactables)) ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  _interactables;

/// @brief Field _meshAppears, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshAppears, put=__cordl_internal_set__meshAppears)) ::ArrayW<::VROSC::AnimatedAppearData_AdjustableMeshAppear*,::Array<::VROSC::AnimatedAppearData_AdjustableMeshAppear*>*>  _meshAppears;

/// @brief Field _rectTransform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectTransform, put=__cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform>  _rectTransform;

/// @brief Field _simpleAppearObjects, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__simpleAppearObjects, put=__cordl_internal_set__simpleAppearObjects)) ::ArrayW<::UnityW<::VROSC::SimpleAppearObject>,::Array<::UnityW<::VROSC::SimpleAppearObject>>*>  _simpleAppearObjects;

/// @brief Field _simpleAppears, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__simpleAppears, put=__cordl_internal_set__simpleAppears)) ::ArrayW<::VROSC::AnimatedAppearData_SimpleAppear*,::Array<::VROSC::AnimatedAppearData_SimpleAppear*>*>  _simpleAppears;

/// @brief Field _textAppears, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__textAppears, put=__cordl_internal_set__textAppears)) ::ArrayW<::VROSC::AnimatedAppearData_TextMeshAppear*,::Array<::VROSC::AnimatedAppearData_TextMeshAppear*>*>  _textAppears;

/// @brief Field _textMeshPros, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__textMeshPros, put=__cordl_internal_set__textMeshPros)) ::ArrayW<::UnityW<::TMPro::TextMeshPro>,::Array<::UnityW<::TMPro::TextMeshPro>>*>  _textMeshPros;

/// @brief Method Clear, addr 0x17a8d98, size 0x14, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetAppearData, addr 0x17a922c, size 0x208, virtual false, abstract: false, final false
inline ::VROSC::MinMaxVector2* GetAppearData(::UnityEngine::RectTransform*  reference, ::UnityEngine::RectTransform*  target) ;

/// @brief Method GetAppearData, addr 0x17a9480, size 0x1c0, virtual false, abstract: false, final false
inline ::VROSC::MinMaxVector2* GetAppearData(::UnityEngine::RectTransform*  reference, ::VROSC::AdjustableMesh*  target) ;

/// @brief Method GetAppearData, addr 0x17a96a8, size 0x13c, virtual false, abstract: false, final false
inline ::VROSC::MinMaxVector2* GetAppearData(::UnityEngine::RectTransform*  reference, ::VROSC::SimpleAppearObject*  target) ;

/// @brief Method GetLocalPos, addr 0x17a991c, size 0x118, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetLocalPos(::UnityEngine::RectTransform*  reference, ::UnityEngine::RectTransform*  target, ::UnityEngine::Vector2  pos) ;

static inline ::VROSC::AnimatedAppearData* New_ctor(::UnityEngine::GameObject*  parent, ::UnityEngine::RectTransform*  rectTransform) ;

/// @brief Method SetAppearActive, addr 0x17a8a0c, size 0x8, virtual false, abstract: false, final false
inline void SetAppearActive(bool  appearing) ;

/// @brief Method SetAppearData, addr 0x17a8f10, size 0x31c, virtual false, abstract: false, final false
inline void SetAppearData(::UnityEngine::RectTransform*  reference) ;

/// @brief Method SetInteractablesDisabled, addr 0x17a98cc, size 0x50, virtual false, abstract: false, final false
inline void SetInteractablesDisabled(bool  disabled) ;

/// @brief Method UpdateAppearAmount, addr 0x17a850c, size 0x158, virtual false, abstract: false, final false
inline void UpdateAppearAmount(float_t  amount, ::VROSC::AnimatedAppear_Mode  mode, bool  useFlash, bool  force) ;

constexpr ::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*> const& __cordl_internal_get__adjustableMeshes() const;

constexpr ::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*>& __cordl_internal_get__adjustableMeshes() ;

constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*> const& __cordl_internal_get__interactables() const;

constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>& __cordl_internal_get__interactables() ;

constexpr ::ArrayW<::VROSC::AnimatedAppearData_AdjustableMeshAppear*,::Array<::VROSC::AnimatedAppearData_AdjustableMeshAppear*>*> const& __cordl_internal_get__meshAppears() const;

constexpr ::ArrayW<::VROSC::AnimatedAppearData_AdjustableMeshAppear*,::Array<::VROSC::AnimatedAppearData_AdjustableMeshAppear*>*>& __cordl_internal_get__meshAppears() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform() ;

constexpr ::ArrayW<::UnityW<::VROSC::SimpleAppearObject>,::Array<::UnityW<::VROSC::SimpleAppearObject>>*> const& __cordl_internal_get__simpleAppearObjects() const;

constexpr ::ArrayW<::UnityW<::VROSC::SimpleAppearObject>,::Array<::UnityW<::VROSC::SimpleAppearObject>>*>& __cordl_internal_get__simpleAppearObjects() ;

constexpr ::ArrayW<::VROSC::AnimatedAppearData_SimpleAppear*,::Array<::VROSC::AnimatedAppearData_SimpleAppear*>*> const& __cordl_internal_get__simpleAppears() const;

constexpr ::ArrayW<::VROSC::AnimatedAppearData_SimpleAppear*,::Array<::VROSC::AnimatedAppearData_SimpleAppear*>*>& __cordl_internal_get__simpleAppears() ;

constexpr ::ArrayW<::VROSC::AnimatedAppearData_TextMeshAppear*,::Array<::VROSC::AnimatedAppearData_TextMeshAppear*>*> const& __cordl_internal_get__textAppears() const;

constexpr ::ArrayW<::VROSC::AnimatedAppearData_TextMeshAppear*,::Array<::VROSC::AnimatedAppearData_TextMeshAppear*>*>& __cordl_internal_get__textAppears() ;

constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>,::Array<::UnityW<::TMPro::TextMeshPro>>*> const& __cordl_internal_get__textMeshPros() const;

constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>,::Array<::UnityW<::TMPro::TextMeshPro>>*>& __cordl_internal_get__textMeshPros() ;

constexpr void __cordl_internal_set__adjustableMeshes(::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*>  value) ;

constexpr void __cordl_internal_set__interactables(::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  value) ;

constexpr void __cordl_internal_set__meshAppears(::ArrayW<::VROSC::AnimatedAppearData_AdjustableMeshAppear*,::Array<::VROSC::AnimatedAppearData_AdjustableMeshAppear*>*>  value) ;

constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__simpleAppearObjects(::ArrayW<::UnityW<::VROSC::SimpleAppearObject>,::Array<::UnityW<::VROSC::SimpleAppearObject>>*>  value) ;

constexpr void __cordl_internal_set__simpleAppears(::ArrayW<::VROSC::AnimatedAppearData_SimpleAppear*,::Array<::VROSC::AnimatedAppearData_SimpleAppear*>*>  value) ;

constexpr void __cordl_internal_set__textAppears(::ArrayW<::VROSC::AnimatedAppearData_TextMeshAppear*,::Array<::VROSC::AnimatedAppearData_TextMeshAppear*>*>  value) ;

constexpr void __cordl_internal_set__textMeshPros(::ArrayW<::UnityW<::TMPro::TextMeshPro>,::Array<::UnityW<::TMPro::TextMeshPro>>*>  value) ;

/// @brief Method .ctor, addr 0x17a8250, size 0x170, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::GameObject*  parent, ::UnityEngine::RectTransform*  rectTransform) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatedAppearData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatedAppearData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatedAppearData(AnimatedAppearData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedAppearData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatedAppearData(AnimatedAppearData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1403};

/// @brief Field _rectTransform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectTransform;

/// @brief Field _interactables, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  ____interactables;

/// @brief Field _adjustableMeshes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*>  ____adjustableMeshes;

/// @brief Field _textMeshPros, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::TMPro::TextMeshPro>,::Array<::UnityW<::TMPro::TextMeshPro>>*>  ____textMeshPros;

/// @brief Field _simpleAppearObjects, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::SimpleAppearObject>,::Array<::UnityW<::VROSC::SimpleAppearObject>>*>  ____simpleAppearObjects;

/// @brief Field _textAppears, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::VROSC::AnimatedAppearData_TextMeshAppear*,::Array<::VROSC::AnimatedAppearData_TextMeshAppear*>*>  ____textAppears;

/// @brief Field _meshAppears, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::VROSC::AnimatedAppearData_AdjustableMeshAppear*,::Array<::VROSC::AnimatedAppearData_AdjustableMeshAppear*>*>  ____meshAppears;

/// @brief Field _simpleAppears, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::VROSC::AnimatedAppearData_SimpleAppear*,::Array<::VROSC::AnimatedAppearData_SimpleAppear*>*>  ____simpleAppears;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AnimatedAppearData, ____rectTransform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppearData, ____interactables) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppearData, ____adjustableMeshes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppearData, ____textMeshPros) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppearData, ____simpleAppearObjects) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppearData, ____textAppears) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppearData, ____meshAppears) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppearData, ____simpleAppears) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AnimatedAppearData, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AnimatedAppearData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AnimatedAppearData*, "VROSC", "AnimatedAppearData");
NEED_NO_BOX(::VROSC::AnimatedAppearData_AdjustableMeshAppear);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AnimatedAppearData_AdjustableMeshAppear*, "VROSC", "AnimatedAppearData/AdjustableMeshAppear");
NEED_NO_BOX(::VROSC::AnimatedAppearData_AppearingObject);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AnimatedAppearData_AppearingObject*, "VROSC", "AnimatedAppearData/AppearingObject");
NEED_NO_BOX(::VROSC::AnimatedAppearData_SimpleAppear);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AnimatedAppearData_SimpleAppear*, "VROSC", "AnimatedAppearData/SimpleAppear");
NEED_NO_BOX(::VROSC::AnimatedAppearData_TextMeshAppear);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AnimatedAppearData_TextMeshAppear*, "VROSC", "AnimatedAppearData/TextMeshAppear");
