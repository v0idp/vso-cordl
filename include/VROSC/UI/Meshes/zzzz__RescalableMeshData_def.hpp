#pragma once
// IWYU pragma private; include "VROSC/UI/Meshes/RescalableMeshData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RescalableMeshData)
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC::UI::Meshes {
class RescalableMeshData_VertexData;
}
namespace VROSC::UI::Meshes {
class RescalableMeshData___c;
}
// Forward declare root types
namespace VROSC::UI::Meshes {
class RescalableMeshData;
}
namespace VROSC::UI::Meshes {
class RescalableMeshData_VertexData;
}
namespace VROSC::UI::Meshes {
class RescalableMeshData___c;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::Meshes::RescalableMeshData);
MARK_REF_PTR_T(::VROSC::UI::Meshes::RescalableMeshData_VertexData);
MARK_REF_PTR_T(::VROSC::UI::Meshes::RescalableMeshData___c);
// Dependencies System.Object, UnityEngine.Vector2, UnityEngine.Vector3
namespace VROSC::UI::Meshes {
// Is value type: false
// CS Name: VROSC.UI.Meshes.RescalableMeshData/VertexData
class CORDL_TYPE RescalableMeshData_VertexData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_OriginalPosition)) ::UnityEngine::Vector3  OriginalPosition;

 __declspec(property(get=get_Scaling)) ::UnityEngine::Vector2  Scaling;

/// @brief Field _originalPosition, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get__originalPosition, put=__cordl_internal_set__originalPosition)) ::UnityEngine::Vector3  _originalPosition;

/// @brief Field _scaling, offset 0x1c, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaling, put=__cordl_internal_set__scaling)) ::UnityEngine::Vector2  _scaling;

static inline ::VROSC::UI::Meshes::RescalableMeshData_VertexData* New_ctor(::UnityEngine::Vector3  position, ::UnityEngine::Vector2  scaling) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__originalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__originalPosition() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__scaling() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__scaling() ;

constexpr void __cordl_internal_set__originalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__scaling(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x17e985c, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  position, ::UnityEngine::Vector2  scaling) ;

/// @brief Method get_OriginalPosition, addr 0x17e98bc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_OriginalPosition() ;

/// @brief Method get_Scaling, addr 0x17e98c8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Scaling() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RescalableMeshData_VertexData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RescalableMeshData_VertexData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RescalableMeshData_VertexData(RescalableMeshData_VertexData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RescalableMeshData_VertexData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RescalableMeshData_VertexData(RescalableMeshData_VertexData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1631};

/// @brief Field _originalPosition, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____originalPosition;

/// @brief Field _scaling, offset: 0x1c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____scaling;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::Meshes::RescalableMeshData_VertexData, ____originalPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::RescalableMeshData_VertexData, ____scaling) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::RescalableMeshData_VertexData, 0x28>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
// Dependencies System.Object
namespace VROSC::UI::Meshes {
// Is value type: false
// CS Name: VROSC.UI.Meshes.RescalableMeshData/<>c
class CORDL_TYPE RescalableMeshData___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::UI::Meshes::RescalableMeshData___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*  __9__14_0;

/// @brief Field <>9__14_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_1, put=setStaticF___9__14_1)) ::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*  __9__14_1;

/// @brief Field <>9__14_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_2, put=setStaticF___9__14_2)) ::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*  __9__14_2;

/// @brief Field <>9__14_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_3, put=setStaticF___9__14_3)) ::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*  __9__14_3;

static inline ::VROSC::UI::Meshes::RescalableMeshData___c* New_ctor() ;

/// @brief Method <Analyze>b__14_0, addr 0x17e9934, size 0x18, virtual false, abstract: false, final false
inline float_t _Analyze_b__14_0(::VROSC::UI::Meshes::RescalableMeshData_VertexData*  o) ;

/// @brief Method <Analyze>b__14_1, addr 0x17e994c, size 0x18, virtual false, abstract: false, final false
inline float_t _Analyze_b__14_1(::VROSC::UI::Meshes::RescalableMeshData_VertexData*  o) ;

/// @brief Method <Analyze>b__14_2, addr 0x17e9964, size 0x18, virtual false, abstract: false, final false
inline float_t _Analyze_b__14_2(::VROSC::UI::Meshes::RescalableMeshData_VertexData*  o) ;

/// @brief Method <Analyze>b__14_3, addr 0x17e997c, size 0x18, virtual false, abstract: false, final false
inline float_t _Analyze_b__14_3(::VROSC::UI::Meshes::RescalableMeshData_VertexData*  o) ;

/// @brief Method .ctor, addr 0x17e992c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::UI::Meshes::RescalableMeshData___c* getStaticF___9() ;

static inline ::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>* getStaticF___9__14_0() ;

static inline ::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>* getStaticF___9__14_1() ;

static inline ::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>* getStaticF___9__14_2() ;

static inline ::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>* getStaticF___9__14_3() ;

static inline void setStaticF___9(::VROSC::UI::Meshes::RescalableMeshData___c*  value) ;

static inline void setStaticF___9__14_0(::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*  value) ;

static inline void setStaticF___9__14_1(::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*  value) ;

static inline void setStaticF___9__14_2(::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*  value) ;

static inline void setStaticF___9__14_3(::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RescalableMeshData___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RescalableMeshData___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RescalableMeshData___c(RescalableMeshData___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RescalableMeshData___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RescalableMeshData___c(RescalableMeshData___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1632};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::RescalableMeshData___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
// Dependencies UnityEngine.ScriptableObject
namespace VROSC::UI::Meshes {
// Is value type: false
// CS Name: VROSC.UI.Meshes.RescalableMeshData
class CORDL_TYPE RescalableMeshData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using VertexData = ::VROSC::UI::Meshes::RescalableMeshData_VertexData;

using __c = ::VROSC::UI::Meshes::RescalableMeshData___c;

 __declspec(property(get=get_Height)) float_t  Height;

 __declspec(property(get=get_Mesh)) ::UnityW<::UnityEngine::Mesh>  Mesh;

 __declspec(property(get=get_Width)) float_t  Width;

/// @brief Field _data, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::ArrayW<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,::Array<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>*>  _data;

/// @brief Field _flipX, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__flipX, put=__cordl_internal_set__flipX)) bool  _flipX;

/// @brief Field _flipY, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__flipY, put=__cordl_internal_set__flipY)) bool  _flipY;

/// @brief Field _height, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__height, put=__cordl_internal_set__height)) float_t  _height;

/// @brief Field _mesh, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__mesh, put=__cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh>  _mesh;

/// @brief Field _width, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__width, put=__cordl_internal_set__width)) float_t  _width;

/// @brief Method Analyze, addr 0x17e938c, size 0x4d0, virtual false, abstract: false, final false
inline void Analyze() ;

/// @brief Method GetScaledMesh, addr 0x17e9244, size 0xe0, virtual false, abstract: false, final false
inline void GetScaledMesh(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  positions, float_t  targetWidth, float_t  targetHeight) ;

static inline ::VROSC::UI::Meshes::RescalableMeshData* New_ctor() ;

constexpr ::ArrayW<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,::Array<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>*> const& __cordl_internal_get__data() const;

constexpr ::ArrayW<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,::Array<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>*>& __cordl_internal_get__data() ;

constexpr bool const& __cordl_internal_get__flipX() const;

constexpr bool& __cordl_internal_get__flipX() ;

constexpr bool const& __cordl_internal_get__flipY() const;

constexpr bool& __cordl_internal_get__flipY() ;

constexpr float_t const& __cordl_internal_get__height() const;

constexpr float_t& __cordl_internal_get__height() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh() ;

constexpr float_t const& __cordl_internal_get__width() const;

constexpr float_t& __cordl_internal_get__width() ;

constexpr void __cordl_internal_set__data(::ArrayW<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,::Array<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>*>  value) ;

constexpr void __cordl_internal_set__flipX(bool  value) ;

constexpr void __cordl_internal_set__flipY(bool  value) ;

constexpr void __cordl_internal_set__height(float_t  value) ;

constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__width(float_t  value) ;

/// @brief Method .ctor, addr 0x17e98ac, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Height, addr 0x17e9384, size 0x8, virtual false, abstract: false, final false
inline float_t get_Height() ;

/// @brief Method get_Mesh, addr 0x17e9374, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_Mesh() ;

/// @brief Method get_Width, addr 0x17e937c, size 0x8, virtual false, abstract: false, final false
inline float_t get_Width() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RescalableMeshData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RescalableMeshData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RescalableMeshData(RescalableMeshData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RescalableMeshData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RescalableMeshData(RescalableMeshData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1633};

/// @brief Field _mesh, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____mesh;

/// @brief Field _height, offset: 0x20, size: 0x4, def value: None
 float_t  ____height;

/// @brief Field _width, offset: 0x24, size: 0x4, def value: None
 float_t  ____width;

/// @brief Field _flipX, offset: 0x28, size: 0x1, def value: None
 bool  ____flipX;

/// @brief Field _flipY, offset: 0x29, size: 0x1, def value: None
 bool  ____flipY;

/// @brief Field _data, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,::Array<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>*>  ____data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::Meshes::RescalableMeshData, ____mesh) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::RescalableMeshData, ____height) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::RescalableMeshData, ____width) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::RescalableMeshData, ____flipX) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::RescalableMeshData, ____flipY) == 0x29, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::RescalableMeshData, ____data) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::RescalableMeshData, 0x38>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
NEED_NO_BOX(::VROSC::UI::Meshes::RescalableMeshData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::RescalableMeshData*, "VROSC.UI.Meshes", "RescalableMeshData");
NEED_NO_BOX(::VROSC::UI::Meshes::RescalableMeshData_VertexData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::RescalableMeshData_VertexData*, "VROSC.UI.Meshes", "RescalableMeshData/VertexData");
NEED_NO_BOX(::VROSC::UI::Meshes::RescalableMeshData___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::RescalableMeshData___c*, "VROSC.UI.Meshes", "RescalableMeshData/<>c");
