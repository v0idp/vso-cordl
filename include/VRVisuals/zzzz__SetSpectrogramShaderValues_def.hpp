#pragma once
// IWYU pragma private; include "VRVisuals/SetSpectrogramShaderValues.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SetSpectrogramShaderValues)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
namespace VRVisuals {
class SetSpectrogramShaderValues_TimestampedValues;
}
// Forward declare root types
namespace VRVisuals {
class SetSpectrogramShaderValues;
}
namespace VRVisuals {
class SetSpectrogramShaderValues_TimestampedValues;
}
// Write type traits
MARK_REF_PTR_T(::VRVisuals::SetSpectrogramShaderValues);
MARK_REF_PTR_T(::VRVisuals::SetSpectrogramShaderValues_TimestampedValues);
// Dependencies System.Object
namespace VRVisuals {
// Is value type: false
// CS Name: VRVisuals.SetSpectrogramShaderValues/TimestampedValues
class CORDL_TYPE SetSpectrogramShaderValues_TimestampedValues : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Life, put=set_Life)) float_t  Life;

 __declspec(property(get=get_Values, put=set_Values)) ::System::Collections::Generic::List_1<float_t>*  Values;

/// @brief Field <Life>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Life_k__BackingField, put=__cordl_internal_set__Life_k__BackingField)) float_t  _Life_k__BackingField;

/// @brief Field <Values>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Values_k__BackingField, put=__cordl_internal_set__Values_k__BackingField)) ::System::Collections::Generic::List_1<float_t>*  _Values_k__BackingField;

/// @brief Method Age, addr 0x17c4f2c, size 0x10, virtual false, abstract: false, final false
inline void Age(float_t  decay) ;

/// @brief Method ArcVector, addr 0x17c57a8, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ArcVector(float_t  yaw, float_t  radius) ;

/// @brief Method GetAsCircle, addr 0x17c4f3c, size 0x258, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetAsCircle(float_t  minRange, float_t  maxRange, float_t  scale) ;

static inline ::VRVisuals::SetSpectrogramShaderValues_TimestampedValues* New_ctor(::System::Collections::Generic::List_1<float_t>*  values) ;

constexpr float_t const& __cordl_internal_get__Life_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Life_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get__Values_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get__Values_k__BackingField() ;

constexpr void __cordl_internal_set__Life_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Values_k__BackingField(::System::Collections::Generic::List_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x17c4efc, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method get_Life, addr 0x17c5790, size 0x8, virtual false, abstract: false, final false
inline float_t get_Life() ;

/// @brief Method get_Values, addr 0x17c57a0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<float_t>* get_Values() ;

/// @brief Method set_Life, addr 0x17c5788, size 0x8, virtual false, abstract: false, final false
inline void set_Life(float_t  value) ;

/// @brief Method set_Values, addr 0x17c5798, size 0x8, virtual false, abstract: false, final false
inline void set_Values(::System::Collections::Generic::List_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetSpectrogramShaderValues_TimestampedValues() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetSpectrogramShaderValues_TimestampedValues", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetSpectrogramShaderValues_TimestampedValues(SetSpectrogramShaderValues_TimestampedValues && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetSpectrogramShaderValues_TimestampedValues", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetSpectrogramShaderValues_TimestampedValues(SetSpectrogramShaderValues_TimestampedValues const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{272};

/// @brief Field <Life>k__BackingField, offset: 0x10, size: 0x4, def value: None
 float_t  ____Life_k__BackingField;

/// @brief Field <Values>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ____Values_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VRVisuals::SetSpectrogramShaderValues_TimestampedValues, ____Life_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VRVisuals::SetSpectrogramShaderValues_TimestampedValues, ____Values_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VRVisuals::SetSpectrogramShaderValues_TimestampedValues, 0x20>, "Size mismatch!");

} // namespace end def VRVisuals
// Dependencies UnityEngine.MonoBehaviour
namespace VRVisuals {
// Is value type: false
// CS Name: VRVisuals.SetSpectrogramShaderValues
class CORDL_TYPE SetSpectrogramShaderValues : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TimestampedValues = ::VRVisuals::SetSpectrogramShaderValues_TimestampedValues;

/// @brief Field _life, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__life, put=__cordl_internal_set__life)) float_t  _life;

/// @brief Field _maxRange, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxRange, put=__cordl_internal_set__maxRange)) float_t  _maxRange;

/// @brief Field _mesh, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__mesh, put=__cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh>  _mesh;

/// @brief Field _meshFilters, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshFilters, put=__cordl_internal_set__meshFilters)) ::ArrayW<::UnityW<::UnityEngine::MeshFilter>,::Array<::UnityW<::UnityEngine::MeshFilter>>*>  _meshFilters;

/// @brief Field _minRange, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__minRange, put=__cordl_internal_set__minRange)) float_t  _minRange;

/// @brief Field _scale, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__scale, put=__cordl_internal_set__scale)) float_t  _scale;

/// @brief Field _timestampedValues, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__timestampedValues, put=__cordl_internal_set__timestampedValues)) ::System::Collections::Generic::List_1<::VRVisuals::SetSpectrogramShaderValues_TimestampedValues*>*  _timestampedValues;

/// @brief Method Awake, addr 0x17c45c0, size 0xb8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Generate, addr 0x17c4a04, size 0x3a8, virtual false, abstract: false, final false
inline void Generate() ;

/// @brief Method Get64Values, addr 0x17c4dac, size 0x150, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<float_t>* Get64Values() ;

/// @brief Method GetValuesFromAudioPeer, addr 0x17c4690, size 0x374, virtual false, abstract: false, final false
inline void GetValuesFromAudioPeer() ;

static inline ::VRVisuals::SetSpectrogramShaderValues* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x17c54a0, size 0x26c, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method Update, addr 0x17c4678, size 0x18, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__life() const;

constexpr float_t& __cordl_internal_get__life() ;

constexpr float_t const& __cordl_internal_get__maxRange() const;

constexpr float_t& __cordl_internal_get__maxRange() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshFilter>,::Array<::UnityW<::UnityEngine::MeshFilter>>*> const& __cordl_internal_get__meshFilters() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshFilter>,::Array<::UnityW<::UnityEngine::MeshFilter>>*>& __cordl_internal_get__meshFilters() ;

constexpr float_t const& __cordl_internal_get__minRange() const;

constexpr float_t& __cordl_internal_get__minRange() ;

constexpr float_t const& __cordl_internal_get__scale() const;

constexpr float_t& __cordl_internal_get__scale() ;

constexpr ::System::Collections::Generic::List_1<::VRVisuals::SetSpectrogramShaderValues_TimestampedValues*>* const& __cordl_internal_get__timestampedValues() const;

constexpr ::System::Collections::Generic::List_1<::VRVisuals::SetSpectrogramShaderValues_TimestampedValues*>*& __cordl_internal_get__timestampedValues() ;

constexpr void __cordl_internal_set__life(float_t  value) ;

constexpr void __cordl_internal_set__maxRange(float_t  value) ;

constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__meshFilters(::ArrayW<::UnityW<::UnityEngine::MeshFilter>,::Array<::UnityW<::UnityEngine::MeshFilter>>*>  value) ;

constexpr void __cordl_internal_set__minRange(float_t  value) ;

constexpr void __cordl_internal_set__scale(float_t  value) ;

constexpr void __cordl_internal_set__timestampedValues(::System::Collections::Generic::List_1<::VRVisuals::SetSpectrogramShaderValues_TimestampedValues*>*  value) ;

/// @brief Method .ctor, addr 0x17c570c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetSpectrogramShaderValues() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetSpectrogramShaderValues", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetSpectrogramShaderValues(SetSpectrogramShaderValues && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetSpectrogramShaderValues", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetSpectrogramShaderValues(SetSpectrogramShaderValues const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{273};

/// @brief Field _life, offset: 0x20, size: 0x4, def value: None
 float_t  ____life;

/// @brief Field _minRange, offset: 0x24, size: 0x4, def value: None
 float_t  ____minRange;

/// @brief Field _maxRange, offset: 0x28, size: 0x4, def value: None
 float_t  ____maxRange;

/// @brief Field _scale, offset: 0x2c, size: 0x4, def value: None
 float_t  ____scale;

/// @brief Field _meshFilters, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshFilter>,::Array<::UnityW<::UnityEngine::MeshFilter>>*>  ____meshFilters;

/// @brief Field _mesh, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____mesh;

/// @brief Field _timestampedValues, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VRVisuals::SetSpectrogramShaderValues_TimestampedValues*>*  ____timestampedValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VRVisuals::SetSpectrogramShaderValues, ____life) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VRVisuals::SetSpectrogramShaderValues, ____minRange) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VRVisuals::SetSpectrogramShaderValues, ____maxRange) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VRVisuals::SetSpectrogramShaderValues, ____scale) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VRVisuals::SetSpectrogramShaderValues, ____meshFilters) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VRVisuals::SetSpectrogramShaderValues, ____mesh) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VRVisuals::SetSpectrogramShaderValues, ____timestampedValues) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VRVisuals::SetSpectrogramShaderValues, 0x48>, "Size mismatch!");

} // namespace end def VRVisuals
NEED_NO_BOX(::VRVisuals::SetSpectrogramShaderValues);
DEFINE_IL2CPP_ARG_TYPE(::VRVisuals::SetSpectrogramShaderValues*, "VRVisuals", "SetSpectrogramShaderValues");
NEED_NO_BOX(::VRVisuals::SetSpectrogramShaderValues_TimestampedValues);
DEFINE_IL2CPP_ARG_TYPE(::VRVisuals::SetSpectrogramShaderValues_TimestampedValues*, "VRVisuals", "SetSpectrogramShaderValues/TimestampedValues");
