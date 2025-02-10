#pragma once
// IWYU pragma private; include "VROSC/Credits/CreditsMultiObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/Credits/zzzz__CreditsObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CreditsMultiObject)
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class AdjustableMesh;
}
// Forward declare root types
namespace VROSC::Credits {
class CreditsMultiObject;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Credits::CreditsMultiObject);
// Dependencies VROSC.Credits.CreditsObject
namespace VROSC::Credits {
// Is value type: false
// CS Name: VROSC.Credits.CreditsMultiObject
class CORDL_TYPE CreditsMultiObject : public ::VROSC::Credits::CreditsObject {
public:
// Declarations
/// @brief Field _lines, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lines, put=__cordl_internal_set__lines)) ::ArrayW<::UnityW<::TMPro::TextMeshPro>,::Array<::UnityW<::TMPro::TextMeshPro>>*>  _lines;

/// @brief Field _linesColors, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__linesColors, put=__cordl_internal_set__linesColors)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  _linesColors;

/// @brief Field _meshes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshes, put=__cordl_internal_set__meshes)) ::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*>  _meshes;

/// @brief Method Awake, addr 0x17dc880, size 0x138, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::Credits::CreditsMultiObject* New_ctor() ;

/// @brief Method UpdateVisibility, addr 0x17dc9b8, size 0x16c, virtual true, abstract: false, final false
inline void UpdateVisibility(float_t  visible) ;

constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>,::Array<::UnityW<::TMPro::TextMeshPro>>*> const& __cordl_internal_get__lines() const;

constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>,::Array<::UnityW<::TMPro::TextMeshPro>>*>& __cordl_internal_get__lines() ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& __cordl_internal_get__linesColors() const;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& __cordl_internal_get__linesColors() ;

constexpr ::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*> const& __cordl_internal_get__meshes() const;

constexpr ::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*>& __cordl_internal_get__meshes() ;

constexpr void __cordl_internal_set__lines(::ArrayW<::UnityW<::TMPro::TextMeshPro>,::Array<::UnityW<::TMPro::TextMeshPro>>*>  value) ;

constexpr void __cordl_internal_set__linesColors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value) ;

constexpr void __cordl_internal_set__meshes(::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*>  value) ;

/// @brief Method .ctor, addr 0x17dcb24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreditsMultiObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreditsMultiObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CreditsMultiObject(CreditsMultiObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreditsMultiObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreditsMultiObject(CreditsMultiObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1580};

/// @brief Field _lines, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::TMPro::TextMeshPro>,::Array<::UnityW<::TMPro::TextMeshPro>>*>  ____lines;

/// @brief Field _meshes, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*>  ____meshes;

/// @brief Field _linesColors, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  ____linesColors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Credits::CreditsMultiObject, ____lines) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsMultiObject, ____meshes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsMultiObject, ____linesColors) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Credits::CreditsMultiObject, 0x40>, "Size mismatch!");

} // namespace end def VROSC::Credits
NEED_NO_BOX(::VROSC::Credits::CreditsMultiObject);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Credits::CreditsMultiObject*, "VROSC.Credits", "CreditsMultiObject");
