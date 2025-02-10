#pragma once
// IWYU pragma private; include "VROSC/FracturedObjectController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FracturedObjectController)
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class FracturedObjectController___c;
}
namespace VROSC {
class MinMaxFloat;
}
// Forward declare root types
namespace VROSC {
class FracturedObjectController;
}
namespace VROSC {
class FracturedObjectController___c;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FracturedObjectController);
MARK_REF_PTR_T(::VROSC::FracturedObjectController___c);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FracturedObjectController/<>c
class CORDL_TYPE FracturedObjectController___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::FracturedObjectController___c*  __9;

/// @brief Field <>9__25_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_0, put=setStaticF___9__25_0)) ::System::Func_2<::UnityW<::UnityEngine::Transform>,float_t>*  __9__25_0;

static inline ::VROSC::FracturedObjectController___c* New_ctor() ;

/// @brief Method <StoreAssembledPositions>b__25_0, addr 0x1767748, size 0x18, virtual false, abstract: false, final false
inline float_t _StoreAssembledPositions_b__25_0(::UnityEngine::Transform*  obj) ;

/// @brief Method .ctor, addr 0x1767740, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::FracturedObjectController___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::Transform>,float_t>* getStaticF___9__25_0() ;

static inline void setStaticF___9(::VROSC::FracturedObjectController___c*  value) ;

static inline void setStaticF___9__25_0(::System::Func_2<::UnityW<::UnityEngine::Transform>,float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FracturedObjectController___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FracturedObjectController___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FracturedObjectController___c(FracturedObjectController___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FracturedObjectController___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FracturedObjectController___c(FracturedObjectController___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1188};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::FracturedObjectController___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FracturedObjectController
class CORDL_TYPE FracturedObjectController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::VROSC::FracturedObjectController___c;

 __declspec(property(get=get_AssembledPositions)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  AssembledPositions;

 __declspec(property(get=get_AssembledRotations)) ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>  AssembledRotations;

 __declspec(property(get=get_Objects)) ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  Objects;

 __declspec(property(get=get_PositionCurve)) ::UnityEngine::AnimationCurve*  PositionCurve;

 __declspec(property(get=get_PositionOffset)) ::VROSC::MinMaxFloat*  PositionOffset;

 __declspec(property(get=get_RotationCurve)) ::UnityEngine::AnimationCurve*  RotationCurve;

 __declspec(property(get=get_RotationOffset)) ::VROSC::MinMaxFloat*  RotationOffset;

 __declspec(property(get=get_ScaleCurve)) ::UnityEngine::AnimationCurve*  ScaleCurve;

/// @brief Field _assembledPositions, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__assembledPositions, put=__cordl_internal_set__assembledPositions)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _assembledPositions;

/// @brief Field _assembledRotations, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__assembledRotations, put=__cordl_internal_set__assembledRotations)) ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>  _assembledRotations;

/// @brief Field _objects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__objects, put=__cordl_internal_set__objects)) ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  _objects;

/// @brief Field _positionCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__positionCurve, put=__cordl_internal_set__positionCurve)) ::UnityEngine::AnimationCurve*  _positionCurve;

/// @brief Field _positionOffset, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__positionOffset, put=__cordl_internal_set__positionOffset)) ::VROSC::MinMaxFloat*  _positionOffset;

/// @brief Field _rotationCurve, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationCurve, put=__cordl_internal_set__rotationCurve)) ::UnityEngine::AnimationCurve*  _rotationCurve;

/// @brief Field _rotationOffset, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationOffset, put=__cordl_internal_set__rotationOffset)) ::VROSC::MinMaxFloat*  _rotationOffset;

/// @brief Field _scaleCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaleCurve, put=__cordl_internal_set__scaleCurve)) ::UnityEngine::AnimationCurve*  _scaleCurve;

/// @brief Method GetAllChildren, addr 0x1767450, size 0x50, virtual false, abstract: false, final false
inline void GetAllChildren() ;

static inline ::VROSC::FracturedObjectController* New_ctor() ;

/// @brief Method ResetObjects, addr 0x1767030, size 0x148, virtual false, abstract: false, final false
inline void ResetObjects() ;

/// @brief Method StoreAssembledPositions, addr 0x17674a0, size 0x23c, virtual false, abstract: false, final false
inline void StoreAssembledPositions() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__assembledPositions() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__assembledPositions() ;

constexpr ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*> const& __cordl_internal_get__assembledRotations() const;

constexpr ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>& __cordl_internal_get__assembledRotations() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__objects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get__objects() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__positionCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__positionCurve() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__positionOffset() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__positionOffset() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__rotationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__rotationCurve() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__rotationOffset() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__rotationOffset() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__scaleCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__scaleCurve() ;

constexpr void __cordl_internal_set__assembledPositions(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr void __cordl_internal_set__assembledRotations(::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>  value) ;

constexpr void __cordl_internal_set__objects(::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  value) ;

constexpr void __cordl_internal_set__positionCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__positionOffset(::VROSC::MinMaxFloat*  value) ;

constexpr void __cordl_internal_set__rotationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__rotationOffset(::VROSC::MinMaxFloat*  value) ;

constexpr void __cordl_internal_set__scaleCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x17676dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AssembledPositions, addr 0x1767440, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> get_AssembledPositions() ;

/// @brief Method get_AssembledRotations, addr 0x1767448, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*> get_AssembledRotations() ;

/// @brief Method get_Objects, addr 0x1767438, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*> get_Objects() ;

/// @brief Method get_PositionCurve, addr 0x1767428, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_PositionCurve() ;

/// @brief Method get_PositionOffset, addr 0x1767410, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::MinMaxFloat* get_PositionOffset() ;

/// @brief Method get_RotationCurve, addr 0x1767420, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_RotationCurve() ;

/// @brief Method get_RotationOffset, addr 0x1767418, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::MinMaxFloat* get_RotationOffset() ;

/// @brief Method get_ScaleCurve, addr 0x1767430, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_ScaleCurve() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FracturedObjectController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FracturedObjectController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FracturedObjectController(FracturedObjectController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FracturedObjectController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FracturedObjectController(FracturedObjectController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1189};

/// @brief Field _objects, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  ____objects;

/// @brief Field _assembledPositions, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ____assembledPositions;

/// @brief Field _assembledRotations, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>  ____assembledRotations;

/// @brief Field _positionOffset, offset: 0x38, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____positionOffset;

/// @brief Field _rotationOffset, offset: 0x40, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____rotationOffset;

/// @brief Field _positionCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____positionCurve;

/// @brief Field _rotationCurve, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____rotationCurve;

/// @brief Field _scaleCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____scaleCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FracturedObjectController, ____objects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FracturedObjectController, ____assembledPositions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FracturedObjectController, ____assembledRotations) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::FracturedObjectController, ____positionOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::FracturedObjectController, ____rotationOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::FracturedObjectController, ____positionCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::FracturedObjectController, ____rotationCurve) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::FracturedObjectController, ____scaleCurve) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FracturedObjectController, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::FracturedObjectController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FracturedObjectController*, "VROSC", "FracturedObjectController");
NEED_NO_BOX(::VROSC::FracturedObjectController___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FracturedObjectController___c*, "VROSC", "FracturedObjectController/<>c");
