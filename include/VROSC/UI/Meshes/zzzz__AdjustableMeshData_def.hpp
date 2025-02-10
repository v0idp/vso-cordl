#pragma once
// IWYU pragma private; include "VROSC/UI/Meshes/AdjustableMeshData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AdjustableMeshData)
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC::UI::Meshes {
class AdjustableMeshData_VertexData;
}
namespace VROSC::UI::Meshes {
class AdjustableMeshData___c;
}
namespace VROSC {
class MinMaxFloat;
}
// Forward declare root types
namespace VROSC::UI::Meshes {
class AdjustableMeshData;
}
namespace VROSC::UI::Meshes {
class AdjustableMeshData_VertexData;
}
namespace VROSC::UI::Meshes {
class AdjustableMeshData___c;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::Meshes::AdjustableMeshData);
MARK_REF_PTR_T(::VROSC::UI::Meshes::AdjustableMeshData_VertexData);
MARK_REF_PTR_T(::VROSC::UI::Meshes::AdjustableMeshData___c);
// Dependencies System.Object, UnityEngine.Vector2, UnityEngine.Vector3
namespace VROSC::UI::Meshes {
// Is value type: false
// CS Name: VROSC.UI.Meshes.AdjustableMeshData/VertexData
class CORDL_TYPE AdjustableMeshData_VertexData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_OriginalPosition)) ::UnityEngine::Vector3  OriginalPosition;

 __declspec(property(get=get_Scaling)) ::UnityEngine::Vector2  Scaling;

/// @brief Field _originalPosition, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get__originalPosition, put=__cordl_internal_set__originalPosition)) ::UnityEngine::Vector3  _originalPosition;

/// @brief Field _scaling, offset 0x1c, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaling, put=__cordl_internal_set__scaling)) ::UnityEngine::Vector2  _scaling;

static inline ::VROSC::UI::Meshes::AdjustableMeshData_VertexData* New_ctor(::UnityEngine::Vector3  position, ::UnityEngine::Vector2  scaling) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__originalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__originalPosition() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__scaling() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__scaling() ;

constexpr void __cordl_internal_set__originalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__scaling(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x17f1708, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  position, ::UnityEngine::Vector2  scaling) ;

/// @brief Method get_OriginalPosition, addr 0x17f1768, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_OriginalPosition() ;

/// @brief Method get_Scaling, addr 0x17f1774, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Scaling() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdjustableMeshData_VertexData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshData_VertexData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdjustableMeshData_VertexData(AdjustableMeshData_VertexData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshData_VertexData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdjustableMeshData_VertexData(AdjustableMeshData_VertexData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1650};

/// @brief Field _originalPosition, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____originalPosition;

/// @brief Field _scaling, offset: 0x1c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____scaling;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::Meshes::AdjustableMeshData_VertexData, ____originalPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::AdjustableMeshData_VertexData, ____scaling) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::AdjustableMeshData_VertexData, 0x28>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
// Dependencies System.Object
namespace VROSC::UI::Meshes {
// Is value type: false
// CS Name: VROSC.UI.Meshes.AdjustableMeshData/<>c
class CORDL_TYPE AdjustableMeshData___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::UI::Meshes::AdjustableMeshData___c*  __9;

/// @brief Field <>9__24_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_0, put=setStaticF___9__24_0)) ::System::Func_2<::UnityEngine::Vector3,float_t>*  __9__24_0;

/// @brief Field <>9__24_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_1, put=setStaticF___9__24_1)) ::System::Func_2<::UnityEngine::Vector3,float_t>*  __9__24_1;

/// @brief Field <>9__24_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_2, put=setStaticF___9__24_2)) ::System::Func_2<::UnityEngine::Vector3,float_t>*  __9__24_2;

/// @brief Field <>9__24_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_3, put=setStaticF___9__24_3)) ::System::Func_2<::UnityEngine::Vector3,float_t>*  __9__24_3;

static inline ::VROSC::UI::Meshes::AdjustableMeshData___c* New_ctor() ;

/// @brief Method <GetDimensions>b__24_0, addr 0x17f17e0, size 0x4, virtual false, abstract: false, final false
inline float_t _GetDimensions_b__24_0(::UnityEngine::Vector3  o) ;

/// @brief Method <GetDimensions>b__24_1, addr 0x17f17e4, size 0x4, virtual false, abstract: false, final false
inline float_t _GetDimensions_b__24_1(::UnityEngine::Vector3  o) ;

/// @brief Method <GetDimensions>b__24_2, addr 0x17f17e8, size 0x8, virtual false, abstract: false, final false
inline float_t _GetDimensions_b__24_2(::UnityEngine::Vector3  o) ;

/// @brief Method <GetDimensions>b__24_3, addr 0x17f17f0, size 0x8, virtual false, abstract: false, final false
inline float_t _GetDimensions_b__24_3(::UnityEngine::Vector3  o) ;

/// @brief Method .ctor, addr 0x17f17d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::UI::Meshes::AdjustableMeshData___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::Vector3,float_t>* getStaticF___9__24_0() ;

static inline ::System::Func_2<::UnityEngine::Vector3,float_t>* getStaticF___9__24_1() ;

static inline ::System::Func_2<::UnityEngine::Vector3,float_t>* getStaticF___9__24_2() ;

static inline ::System::Func_2<::UnityEngine::Vector3,float_t>* getStaticF___9__24_3() ;

static inline void setStaticF___9(::VROSC::UI::Meshes::AdjustableMeshData___c*  value) ;

static inline void setStaticF___9__24_0(::System::Func_2<::UnityEngine::Vector3,float_t>*  value) ;

static inline void setStaticF___9__24_1(::System::Func_2<::UnityEngine::Vector3,float_t>*  value) ;

static inline void setStaticF___9__24_2(::System::Func_2<::UnityEngine::Vector3,float_t>*  value) ;

static inline void setStaticF___9__24_3(::System::Func_2<::UnityEngine::Vector3,float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdjustableMeshData___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshData___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdjustableMeshData___c(AdjustableMeshData___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshData___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdjustableMeshData___c(AdjustableMeshData___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1651};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::AdjustableMeshData___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
// Dependencies UnityEngine.ScriptableObject, UnityEngine.Vector2
namespace VROSC::UI::Meshes {
// Is value type: false
// CS Name: VROSC.UI.Meshes.AdjustableMeshData
class CORDL_TYPE AdjustableMeshData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using VertexData = ::VROSC::UI::Meshes::AdjustableMeshData_VertexData;

using __c = ::VROSC::UI::Meshes::AdjustableMeshData___c;

 __declspec(property(get=get_Analyzed)) bool  Analyzed;

 __declspec(property(get=get_Height)) float_t  Height;

 __declspec(property(get=get_Mesh)) ::UnityW<::UnityEngine::Mesh>  Mesh;

 __declspec(property(get=get_Width)) float_t  Width;

/// @brief Field _analyzed, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__analyzed, put=__cordl_internal_set__analyzed)) bool  _analyzed;

/// @brief Field _center, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__center, put=__cordl_internal_set__center)) ::UnityEngine::Vector2  _center;

/// @brief Field _childOf, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__childOf, put=__cordl_internal_set__childOf)) ::UnityW<::VROSC::UI::Meshes::AdjustableMeshData>  _childOf;

/// @brief Field _data, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::ArrayW<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*,::Array<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*>*>  _data;

/// @brief Field _flipX, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__flipX, put=__cordl_internal_set__flipX)) bool  _flipX;

/// @brief Field _flipY, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__flipY, put=__cordl_internal_set__flipY)) bool  _flipY;

/// @brief Field _height, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__height, put=__cordl_internal_set__height)) float_t  _height;

/// @brief Field _mesh, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__mesh, put=__cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh>  _mesh;

/// @brief Field _simple, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get__simple, put=__cordl_internal_set__simple)) bool  _simple;

/// @brief Field _width, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__width, put=__cordl_internal_set__width)) float_t  _width;

/// @brief Field _x, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__x, put=__cordl_internal_set__x)) ::VROSC::MinMaxFloat*  _x;

/// @brief Field _y, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__y, put=__cordl_internal_set__y)) ::VROSC::MinMaxFloat*  _y;

/// @brief Method Analyze, addr 0x17f0fac, size 0x1b8, virtual false, abstract: false, final false
inline void Analyze() ;

/// @brief Method GetDimensions, addr 0x17f1164, size 0x458, virtual false, abstract: false, final false
inline void GetDimensions() ;

/// @brief Method GetScaledMesh, addr 0x17f0ec0, size 0xec, virtual false, abstract: false, final false
inline void GetScaledMesh(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  positions, ::UnityEngine::Rect  rect) ;

/// @brief Method GetScaledMesh, addr 0x17f0de0, size 0xe0, virtual false, abstract: false, final false
inline void GetScaledMesh(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  positions, float_t  targetWidth, float_t  targetHeight) ;

/// @brief Method GetScaling, addr 0x17f15bc, size 0x14c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetScaling(int32_t  i, ::VROSC::MinMaxFloat*  x, ::VROSC::MinMaxFloat*  y) ;

static inline ::VROSC::UI::Meshes::AdjustableMeshData* New_ctor() ;

constexpr bool const& __cordl_internal_get__analyzed() const;

constexpr bool& __cordl_internal_get__analyzed() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__center() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__center() ;

constexpr ::UnityW<::VROSC::UI::Meshes::AdjustableMeshData> const& __cordl_internal_get__childOf() const;

constexpr ::UnityW<::VROSC::UI::Meshes::AdjustableMeshData>& __cordl_internal_get__childOf() ;

constexpr ::ArrayW<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*,::Array<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*>*> const& __cordl_internal_get__data() const;

constexpr ::ArrayW<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*,::Array<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*>*>& __cordl_internal_get__data() ;

constexpr bool const& __cordl_internal_get__flipX() const;

constexpr bool& __cordl_internal_get__flipX() ;

constexpr bool const& __cordl_internal_get__flipY() const;

constexpr bool& __cordl_internal_get__flipY() ;

constexpr float_t const& __cordl_internal_get__height() const;

constexpr float_t& __cordl_internal_get__height() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh() ;

constexpr bool const& __cordl_internal_get__simple() const;

constexpr bool& __cordl_internal_get__simple() ;

constexpr float_t const& __cordl_internal_get__width() const;

constexpr float_t& __cordl_internal_get__width() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__x() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__x() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__y() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__y() ;

constexpr void __cordl_internal_set__analyzed(bool  value) ;

constexpr void __cordl_internal_set__center(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__childOf(::UnityW<::VROSC::UI::Meshes::AdjustableMeshData>  value) ;

constexpr void __cordl_internal_set__data(::ArrayW<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*,::Array<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*>*>  value) ;

constexpr void __cordl_internal_set__flipX(bool  value) ;

constexpr void __cordl_internal_set__flipY(bool  value) ;

constexpr void __cordl_internal_set__height(float_t  value) ;

constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__simple(bool  value) ;

constexpr void __cordl_internal_set__width(float_t  value) ;

constexpr void __cordl_internal_set__x(::VROSC::MinMaxFloat*  value) ;

constexpr void __cordl_internal_set__y(::VROSC::MinMaxFloat*  value) ;

/// @brief Method .ctor, addr 0x17f1758, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Analyzed, addr 0x17f0dc0, size 0x8, virtual false, abstract: false, final false
inline bool get_Analyzed() ;

/// @brief Method get_Height, addr 0x17f0dd8, size 0x8, virtual false, abstract: false, final false
inline float_t get_Height() ;

/// @brief Method get_Mesh, addr 0x17f0dc8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_Mesh() ;

/// @brief Method get_Width, addr 0x17f0dd0, size 0x8, virtual false, abstract: false, final false
inline float_t get_Width() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdjustableMeshData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdjustableMeshData(AdjustableMeshData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdjustableMeshData(AdjustableMeshData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1652};

/// @brief Field _mesh, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____mesh;

/// @brief Field _childOf, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::Meshes::AdjustableMeshData>  ____childOf;

/// @brief Field _height, offset: 0x28, size: 0x4, def value: None
 float_t  ____height;

/// @brief Field _width, offset: 0x2c, size: 0x4, def value: None
 float_t  ____width;

/// @brief Field _center, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____center;

/// @brief Field _flipX, offset: 0x38, size: 0x1, def value: None
 bool  ____flipX;

/// @brief Field _flipY, offset: 0x39, size: 0x1, def value: None
 bool  ____flipY;

/// @brief Field _simple, offset: 0x3a, size: 0x1, def value: None
 bool  ____simple;

/// @brief Field _data, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*,::Array<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*>*>  ____data;

/// @brief Field _x, offset: 0x48, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____x;

/// @brief Field _y, offset: 0x50, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____y;

/// @brief Field _analyzed, offset: 0x58, size: 0x1, def value: None
 bool  ____analyzed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::Meshes::AdjustableMeshData, ____mesh) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::AdjustableMeshData, ____childOf) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::AdjustableMeshData, ____height) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::AdjustableMeshData, ____width) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::AdjustableMeshData, ____center) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::AdjustableMeshData, ____flipX) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::AdjustableMeshData, ____flipY) == 0x39, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::AdjustableMeshData, ____simple) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::AdjustableMeshData, ____data) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::AdjustableMeshData, ____x) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::AdjustableMeshData, ____y) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::AdjustableMeshData, ____analyzed) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::AdjustableMeshData, 0x60>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
NEED_NO_BOX(::VROSC::UI::Meshes::AdjustableMeshData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::AdjustableMeshData*, "VROSC.UI.Meshes", "AdjustableMeshData");
NEED_NO_BOX(::VROSC::UI::Meshes::AdjustableMeshData_VertexData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::AdjustableMeshData_VertexData*, "VROSC.UI.Meshes", "AdjustableMeshData/VertexData");
NEED_NO_BOX(::VROSC::UI::Meshes::AdjustableMeshData___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::AdjustableMeshData___c*, "VROSC.UI.Meshes", "AdjustableMeshData/<>c");
