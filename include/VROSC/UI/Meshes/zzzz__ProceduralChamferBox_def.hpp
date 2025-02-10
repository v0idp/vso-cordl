#pragma once
// IWYU pragma private; include "VROSC/UI/Meshes/ProceduralChamferBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/UI/Meshes/zzzz__ProceduralMeshData_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProceduralChamferBox)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
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
namespace VROSC::UI::Meshes {
struct ProceduralChamferBox_Type;
}
namespace VROSC {
struct AnimatedAppear_Mode;
}
// Forward declare root types
namespace VROSC::UI::Meshes {
struct ProceduralChamferBox_Type;
}
namespace VROSC::UI::Meshes {
class ProceduralChamferBox;
}
// Write type traits
MARK_VAL_T(::VROSC::UI::Meshes::ProceduralChamferBox_Type);
MARK_REF_PTR_T(::VROSC::UI::Meshes::ProceduralChamferBox);
// Dependencies 
namespace VROSC::UI::Meshes {
// Is value type: true
// CS Name: VROSC.UI.Meshes.ProceduralChamferBox/Type
struct CORDL_TYPE ProceduralChamferBox_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProceduralChamferBox_Type_Unwrapped
enum struct __ProceduralChamferBox_Type_Unwrapped : int32_t {
__E_Full = static_cast<int32_t>(0x0),
__E_TopOnly = static_cast<int32_t>(0x1),
__E_BottomOnly = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProceduralChamferBox_Type_Unwrapped () const noexcept {
return static_cast<__ProceduralChamferBox_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProceduralChamferBox_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ProceduralChamferBox_Type(int32_t  value__) noexcept;

/// @brief Field BottomOnly value: I32(2)
static ::VROSC::UI::Meshes::ProceduralChamferBox_Type const BottomOnly;

/// @brief Field Full value: I32(0)
static ::VROSC::UI::Meshes::ProceduralChamferBox_Type const Full;

/// @brief Field TopOnly value: I32(1)
static ::VROSC::UI::Meshes::ProceduralChamferBox_Type const TopOnly;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1637};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::Meshes::ProceduralChamferBox_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::ProceduralChamferBox_Type, 0x4>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
// Dependencies VROSC.UI.Meshes.ProceduralChamferBox::Type, VROSC.UI.Meshes.ProceduralMeshData
namespace VROSC::UI::Meshes {
// Is value type: false
// CS Name: VROSC.UI.Meshes.ProceduralChamferBox
class CORDL_TYPE ProceduralChamferBox : public ::VROSC::UI::Meshes::ProceduralMeshData {
public:
// Declarations
using Type = ::VROSC::UI::Meshes::ProceduralChamferBox_Type;

 __declspec(property(get=get_VertCount)) int32_t  VertCount;

/// @brief Field _chamferEdges, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__chamferEdges, put=__cordl_internal_set__chamferEdges)) int32_t  _chamferEdges;

/// @brief Field _fillcenter, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__fillcenter, put=__cordl_internal_set__fillcenter)) bool  _fillcenter;

/// @brief Field _type, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__type, put=__cordl_internal_set__type)) ::VROSC::UI::Meshes::ProceduralChamferBox_Type  _type;

/// @brief Method AddCornerVerts, addr 0x17eb77c, size 0x1cc, virtual false, abstract: false, final false
inline void AddCornerVerts(::System::Collections::Generic::List_1<int32_t>*  triangleList, ::System::Object*  corners, int32_t  vertStart) ;

/// @brief Method GetChamferPos, addr 0x17ebe9c, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetChamferPos(float_t  count, float_t  corner, float_t  radius) ;

/// @brief Method GetSharedMeshData, addr 0x17eb32c, size 0x450, virtual true, abstract: false, final false
inline void GetSharedMeshData(::UnityEngine::Mesh*  mesh) ;

/// @brief Method GetVertCount, addr 0x17eb2f0, size 0x20, virtual false, abstract: false, final false
inline int32_t GetVertCount() ;

static inline ::VROSC::UI::Meshes::ProceduralChamferBox* New_ctor() ;

/// @brief Method OnValidate, addr 0x17eb310, size 0x1c, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetMeshSize, addr 0x17eb948, size 0x554, virtual true, abstract: false, final false
inline void SetMeshSize(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rect  rect, float_t  depth, float_t  border, float_t  appear, ::VROSC::AnimatedAppear_Mode  mode) ;

constexpr int32_t const& __cordl_internal_get__chamferEdges() const;

constexpr int32_t& __cordl_internal_get__chamferEdges() ;

constexpr bool const& __cordl_internal_get__fillcenter() const;

constexpr bool& __cordl_internal_get__fillcenter() ;

constexpr ::VROSC::UI::Meshes::ProceduralChamferBox_Type const& __cordl_internal_get__type() const;

constexpr ::VROSC::UI::Meshes::ProceduralChamferBox_Type& __cordl_internal_get__type() ;

constexpr void __cordl_internal_set__chamferEdges(int32_t  value) ;

constexpr void __cordl_internal_set__fillcenter(bool  value) ;

constexpr void __cordl_internal_set__type(::VROSC::UI::Meshes::ProceduralChamferBox_Type  value) ;

/// @brief Method .ctor, addr 0x17ebf0c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_VertCount, addr 0x17eb2d0, size 0x20, virtual true, abstract: false, final false
inline int32_t get_VertCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProceduralChamferBox() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralChamferBox", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralChamferBox(ProceduralChamferBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralChamferBox", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralChamferBox(ProceduralChamferBox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1638};

/// @brief Field _chamferEdges, offset: 0x40, size: 0x4, def value: None
 int32_t  ____chamferEdges;

/// @brief Field _type, offset: 0x44, size: 0x4, def value: None
 ::VROSC::UI::Meshes::ProceduralChamferBox_Type  ____type;

/// @brief Field _fillcenter, offset: 0x48, size: 0x1, def value: None
 bool  ____fillcenter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::Meshes::ProceduralChamferBox, ____chamferEdges) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralChamferBox, ____type) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::Meshes::ProceduralChamferBox, ____fillcenter) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::Meshes::ProceduralChamferBox, 0x50>, "Size mismatch!");

} // namespace end def VROSC::UI::Meshes
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::ProceduralChamferBox_Type, "VROSC.UI.Meshes", "ProceduralChamferBox/Type");
NEED_NO_BOX(::VROSC::UI::Meshes::ProceduralChamferBox);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::ProceduralChamferBox*, "VROSC.UI.Meshes", "ProceduralChamferBox");
