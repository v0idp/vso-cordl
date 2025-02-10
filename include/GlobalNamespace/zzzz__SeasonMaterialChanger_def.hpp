#pragma once
// IWYU pragma private; include "GlobalNamespace/SeasonMaterialChanger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SeasonMaterialChanger)
namespace GlobalNamespace {
class SeasonMaterialChanger_SeasonalMaterial;
}
namespace GlobalNamespace {
struct SeasonType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace GlobalNamespace {
class SeasonMaterialChanger;
}
namespace GlobalNamespace {
class SeasonMaterialChanger_SeasonalMaterial;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SeasonMaterialChanger);
MARK_REF_PTR_T(::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SeasonMaterialChanger/SeasonalMaterial
class CORDL_TYPE SeasonMaterialChanger_SeasonalMaterial : public ::System::Object {
public:
// Declarations
/// @brief Field _defaultTexture, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultTexture, put=__cordl_internal_set__defaultTexture)) ::UnityW<::UnityEngine::Texture>  _defaultTexture;

/// @brief Field _material, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__material, put=__cordl_internal_set__material)) ::UnityW<::UnityEngine::Material>  _material;

/// @brief Field _name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _snowEmission, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__snowEmission, put=__cordl_internal_set__snowEmission)) float_t  _snowEmission;

/// @brief Field _winterTexture, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__winterTexture, put=__cordl_internal_set__winterTexture)) ::UnityW<::UnityEngine::Texture>  _winterTexture;

/// @brief Method ApplySeasonTexture, addr 0x16c34cc, size 0x178, virtual false, abstract: false, final false
inline void ApplySeasonTexture(::GlobalNamespace::SeasonType  currentSeason) ;

static inline ::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get__defaultTexture() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get__defaultTexture() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr float_t const& __cordl_internal_get__snowEmission() const;

constexpr float_t& __cordl_internal_get__snowEmission() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get__winterTexture() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get__winterTexture() ;

constexpr void __cordl_internal_set__defaultTexture(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__snowEmission(float_t  value) ;

constexpr void __cordl_internal_set__winterTexture(::UnityW<::UnityEngine::Texture>  value) ;

/// @brief Method .ctor, addr 0x16c364c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SeasonMaterialChanger_SeasonalMaterial() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SeasonMaterialChanger_SeasonalMaterial", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SeasonMaterialChanger_SeasonalMaterial(SeasonMaterialChanger_SeasonalMaterial && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SeasonMaterialChanger_SeasonalMaterial", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SeasonMaterialChanger_SeasonalMaterial(SeasonMaterialChanger_SeasonalMaterial const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{58};

/// @brief Field _name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _material, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material;

/// @brief Field _defaultTexture, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ____defaultTexture;

/// @brief Field _winterTexture, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ____winterTexture;

/// @brief Field _snowEmission, offset: 0x30, size: 0x4, def value: None
 float_t  ____snowEmission;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial, ____name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial, ____material) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial, ____defaultTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial, ____winterTexture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial, ____snowEmission) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: SeasonMaterialChanger
class CORDL_TYPE SeasonMaterialChanger : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using SeasonalMaterial = ::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial;

/// @brief Field seasonalMaterials, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_seasonalMaterials, put=__cordl_internal_set_seasonalMaterials)) ::System::Collections::Generic::List_1<::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial*>*  seasonalMaterials;

/// @brief Method ApplySeason, addr 0x16c2dcc, size 0x150, virtual false, abstract: false, final false
inline void ApplySeason(::GlobalNamespace::SeasonType  currentSeason) ;

static inline ::GlobalNamespace::SeasonMaterialChanger* New_ctor() ;

/// @brief Method OnValidate, addr 0x16c336c, size 0x160, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial*>* const& __cordl_internal_get_seasonalMaterials() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial*>*& __cordl_internal_get_seasonalMaterials() ;

constexpr void __cordl_internal_set_seasonalMaterials(::System::Collections::Generic::List_1<::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial*>*  value) ;

/// @brief Method .ctor, addr 0x16c3644, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SeasonMaterialChanger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SeasonMaterialChanger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SeasonMaterialChanger(SeasonMaterialChanger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SeasonMaterialChanger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SeasonMaterialChanger(SeasonMaterialChanger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{59};

/// @brief Field seasonalMaterials, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial*>*  ___seasonalMaterials;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SeasonMaterialChanger, ___seasonalMaterials) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SeasonMaterialChanger, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SeasonMaterialChanger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SeasonMaterialChanger*, "", "SeasonMaterialChanger");
NEED_NO_BOX(::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SeasonMaterialChanger_SeasonalMaterial*, "", "SeasonMaterialChanger/SeasonalMaterial");
