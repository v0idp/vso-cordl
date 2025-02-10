#pragma once
// IWYU pragma private; include "VROSC/ParameterLink.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__ValueSourceSelector_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ParameterLink)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace VROSC {
class ParameterLink;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ParameterLink);
// Dependencies System.Object, VROSC.HandType, VROSC.ValueSourceSelector::ValueSource
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ParameterLink
class CORDL_TYPE ParameterLink : public ::System::Object {
public:
// Declarations
/// @brief Field CenterOnHalf, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_CenterOnHalf, put=__cordl_internal_set_CenterOnHalf)) bool  CenterOnHalf;

/// @brief Field Factor, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Factor, put=__cordl_internal_set_Factor)) float_t  Factor;

/// @brief Field HandType, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_HandType, put=__cordl_internal_set_HandType)) ::VROSC::HandType  HandType;

 __declspec(property(get=get_LastSentValue, put=set_LastSentValue)) float_t  LastSentValue;

/// @brief Field LinkHands, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_LinkHands, put=__cordl_internal_set_LinkHands)) bool  LinkHands;

/// @brief Field Parameter, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Parameter, put=__cordl_internal_set_Parameter)) int32_t  Parameter;

/// @brief Field TransformationCurve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TransformationCurve, put=__cordl_internal_set_TransformationCurve)) ::UnityEngine::AnimationCurve*  TransformationCurve;

/// @brief Field ValueSource, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_ValueSource, put=__cordl_internal_set_ValueSource)) ::VROSC::ValueSourceSelector_ValueSource  ValueSource;

/// @brief Field <LastSentValue>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastSentValue_k__BackingField, put=__cordl_internal_set__LastSentValue_k__BackingField)) float_t  _LastSentValue_k__BackingField;

static inline ::VROSC::ParameterLink* New_ctor() ;

constexpr bool const& __cordl_internal_get_CenterOnHalf() const;

constexpr bool& __cordl_internal_get_CenterOnHalf() ;

constexpr float_t const& __cordl_internal_get_Factor() const;

constexpr float_t& __cordl_internal_get_Factor() ;

constexpr ::VROSC::HandType const& __cordl_internal_get_HandType() const;

constexpr ::VROSC::HandType& __cordl_internal_get_HandType() ;

constexpr bool const& __cordl_internal_get_LinkHands() const;

constexpr bool& __cordl_internal_get_LinkHands() ;

constexpr int32_t const& __cordl_internal_get_Parameter() const;

constexpr int32_t& __cordl_internal_get_Parameter() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_TransformationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_TransformationCurve() ;

constexpr ::VROSC::ValueSourceSelector_ValueSource const& __cordl_internal_get_ValueSource() const;

constexpr ::VROSC::ValueSourceSelector_ValueSource& __cordl_internal_get_ValueSource() ;

constexpr float_t const& __cordl_internal_get__LastSentValue_k__BackingField() const;

constexpr float_t& __cordl_internal_get__LastSentValue_k__BackingField() ;

constexpr void __cordl_internal_set_CenterOnHalf(bool  value) ;

constexpr void __cordl_internal_set_Factor(float_t  value) ;

constexpr void __cordl_internal_set_HandType(::VROSC::HandType  value) ;

constexpr void __cordl_internal_set_LinkHands(bool  value) ;

constexpr void __cordl_internal_set_Parameter(int32_t  value) ;

constexpr void __cordl_internal_set_TransformationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_ValueSource(::VROSC::ValueSourceSelector_ValueSource  value) ;

constexpr void __cordl_internal_set__LastSentValue_k__BackingField(float_t  value) ;

/// @brief Method .ctor, addr 0x1711224, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_LastSentValue, addr 0x1711214, size 0x8, virtual false, abstract: false, final false
inline float_t get_LastSentValue() ;

/// @brief Method set_LastSentValue, addr 0x171121c, size 0x8, virtual false, abstract: false, final false
inline void set_LastSentValue(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParameterLink() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParameterLink", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParameterLink(ParameterLink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParameterLink", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParameterLink(ParameterLink const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{894};

/// @brief Field Parameter, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Parameter;

/// @brief Field ValueSource, offset: 0x14, size: 0x4, def value: None
 ::VROSC::ValueSourceSelector_ValueSource  ___ValueSource;

/// @brief Field HandType, offset: 0x18, size: 0x4, def value: None
 ::VROSC::HandType  ___HandType;

/// @brief Field LinkHands, offset: 0x1c, size: 0x1, def value: None
 bool  ___LinkHands;

/// @brief Field TransformationCurve, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___TransformationCurve;

/// @brief Field Factor, offset: 0x28, size: 0x4, def value: None
 float_t  ___Factor;

/// @brief Field CenterOnHalf, offset: 0x2c, size: 0x1, def value: None
 bool  ___CenterOnHalf;

/// @brief Field <LastSentValue>k__BackingField, offset: 0x30, size: 0x4, def value: None
 float_t  ____LastSentValue_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ParameterLink, ___Parameter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ParameterLink, ___ValueSource) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::ParameterLink, ___HandType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ParameterLink, ___LinkHands) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ParameterLink, ___TransformationCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ParameterLink, ___Factor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ParameterLink, ___CenterOnHalf) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ParameterLink, ____LastSentValue_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ParameterLink, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ParameterLink);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ParameterLink*, "VROSC", "ParameterLink");
