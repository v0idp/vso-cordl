#pragma once
// IWYU pragma private; include "VROSC/ReverbManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ReverbManager)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace VROSC {
class ReverbManager;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ReverbManager);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ReverbManager
class CORDL_TYPE ReverbManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _decayTimeCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__decayTimeCurve, put=__cordl_internal_set__decayTimeCurve)) ::UnityEngine::AnimationCurve*  _decayTimeCurve;

/// @brief Field _decayTimeMax, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__decayTimeMax, put=__cordl_internal_set__decayTimeMax)) float_t  _decayTimeMax;

/// @brief Field _decayTimeMin, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__decayTimeMin, put=__cordl_internal_set__decayTimeMin)) float_t  _decayTimeMin;

/// @brief Field _drumsSendCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__drumsSendCurve, put=__cordl_internal_set__drumsSendCurve)) ::UnityEngine::AnimationCurve*  _drumsSendCurve;

/// @brief Field _drumsSendMax, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__drumsSendMax, put=__cordl_internal_set__drumsSendMax)) float_t  _drumsSendMax;

/// @brief Field _drumsSendMin, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__drumsSendMin, put=__cordl_internal_set__drumsSendMin)) float_t  _drumsSendMin;

/// @brief Field _drumsSendOff, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__drumsSendOff, put=__cordl_internal_set__drumsSendOff)) float_t  _drumsSendOff;

/// @brief Field _reflectionsCurve, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__reflectionsCurve, put=__cordl_internal_set__reflectionsCurve)) ::UnityEngine::AnimationCurve*  _reflectionsCurve;

/// @brief Field _reflectionsMax, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__reflectionsMax, put=__cordl_internal_set__reflectionsMax)) float_t  _reflectionsMax;

/// @brief Field _reflectionsMin, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__reflectionsMin, put=__cordl_internal_set__reflectionsMin)) float_t  _reflectionsMin;

static inline ::VROSC::ReverbManager* New_ctor() ;

/// @brief Method SetDrumsReverbAmount, addr 0x16f6b98, size 0xb0, virtual false, abstract: false, final false
inline void SetDrumsReverbAmount(float_t  amount) ;

/// @brief Method SetReverbLength, addr 0x16f6cf8, size 0x8c, virtual false, abstract: false, final false
inline void SetReverbLength(float_t  length) ;

/// @brief Method SetReverbParameter, addr 0x16f6c48, size 0xb0, virtual false, abstract: false, final false
inline void SetReverbParameter(::StringW  name, float_t  amount, ::UnityEngine::AnimationCurve*  curve, float_t  min, float_t  max) ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__decayTimeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__decayTimeCurve() ;

constexpr float_t const& __cordl_internal_get__decayTimeMax() const;

constexpr float_t& __cordl_internal_get__decayTimeMax() ;

constexpr float_t const& __cordl_internal_get__decayTimeMin() const;

constexpr float_t& __cordl_internal_get__decayTimeMin() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__drumsSendCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__drumsSendCurve() ;

constexpr float_t const& __cordl_internal_get__drumsSendMax() const;

constexpr float_t& __cordl_internal_get__drumsSendMax() ;

constexpr float_t const& __cordl_internal_get__drumsSendMin() const;

constexpr float_t& __cordl_internal_get__drumsSendMin() ;

constexpr float_t const& __cordl_internal_get__drumsSendOff() const;

constexpr float_t& __cordl_internal_get__drumsSendOff() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__reflectionsCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__reflectionsCurve() ;

constexpr float_t const& __cordl_internal_get__reflectionsMax() const;

constexpr float_t& __cordl_internal_get__reflectionsMax() ;

constexpr float_t const& __cordl_internal_get__reflectionsMin() const;

constexpr float_t& __cordl_internal_get__reflectionsMin() ;

constexpr void __cordl_internal_set__decayTimeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__decayTimeMax(float_t  value) ;

constexpr void __cordl_internal_set__decayTimeMin(float_t  value) ;

constexpr void __cordl_internal_set__drumsSendCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__drumsSendMax(float_t  value) ;

constexpr void __cordl_internal_set__drumsSendMin(float_t  value) ;

constexpr void __cordl_internal_set__drumsSendOff(float_t  value) ;

constexpr void __cordl_internal_set__reflectionsCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__reflectionsMax(float_t  value) ;

constexpr void __cordl_internal_set__reflectionsMin(float_t  value) ;

/// @brief Method .ctor, addr 0x16f6d84, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReverbManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReverbManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReverbManager(ReverbManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReverbManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReverbManager(ReverbManager const& ) = delete;

/// @brief Field DecayTimeString offset 0xffffffff size 0x8
static constexpr ::ConstString  DecayTimeString{u"ReverbDecayTime"};

/// @brief Field DrumsReverbSendString offset 0xffffffff size 0x8
static constexpr ::ConstString  DrumsReverbSendString{u"DrumsReverbSend"};

/// @brief Field ReflectionsString offset 0xffffffff size 0x8
static constexpr ::ConstString  ReflectionsString{u"ReverbReflections"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{787};

/// @brief Field _drumsSendOff, offset: 0x20, size: 0x4, def value: None
 float_t  ____drumsSendOff;

/// @brief Field _drumsSendMin, offset: 0x24, size: 0x4, def value: None
 float_t  ____drumsSendMin;

/// @brief Field _drumsSendMax, offset: 0x28, size: 0x4, def value: None
 float_t  ____drumsSendMax;

/// @brief Field _drumsSendCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____drumsSendCurve;

/// @brief Field _decayTimeMin, offset: 0x38, size: 0x4, def value: None
 float_t  ____decayTimeMin;

/// @brief Field _decayTimeMax, offset: 0x3c, size: 0x4, def value: None
 float_t  ____decayTimeMax;

/// @brief Field _decayTimeCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____decayTimeCurve;

/// @brief Field _reflectionsMin, offset: 0x48, size: 0x4, def value: None
 float_t  ____reflectionsMin;

/// @brief Field _reflectionsMax, offset: 0x4c, size: 0x4, def value: None
 float_t  ____reflectionsMax;

/// @brief Field _reflectionsCurve, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____reflectionsCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ReverbManager, ____drumsSendOff) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ReverbManager, ____drumsSendMin) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::ReverbManager, ____drumsSendMax) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ReverbManager, ____drumsSendCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ReverbManager, ____decayTimeMin) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ReverbManager, ____decayTimeMax) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ReverbManager, ____decayTimeCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ReverbManager, ____reflectionsMin) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::ReverbManager, ____reflectionsMax) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ReverbManager, ____reflectionsCurve) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ReverbManager, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ReverbManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ReverbManager*, "VROSC", "ReverbManager");
