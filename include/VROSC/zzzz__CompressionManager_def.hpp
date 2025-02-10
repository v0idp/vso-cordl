#pragma once
// IWYU pragma private; include "VROSC/CompressionManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CompressionManager)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace VROSC {
class CompressionManager;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::CompressionManager);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CompressionManager
class CORDL_TYPE CompressionManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _makeupCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__makeupCurve, put=__cordl_internal_set__makeupCurve)) ::UnityEngine::AnimationCurve*  _makeupCurve;

/// @brief Field _makeupMax, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__makeupMax, put=__cordl_internal_set__makeupMax)) float_t  _makeupMax;

/// @brief Field _makeupMin, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__makeupMin, put=__cordl_internal_set__makeupMin)) float_t  _makeupMin;

/// @brief Field _thresholdCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__thresholdCurve, put=__cordl_internal_set__thresholdCurve)) ::UnityEngine::AnimationCurve*  _thresholdCurve;

/// @brief Field _thresholdMax, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__thresholdMax, put=__cordl_internal_set__thresholdMax)) float_t  _thresholdMax;

/// @brief Field _thresholdMin, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__thresholdMin, put=__cordl_internal_set__thresholdMin)) float_t  _thresholdMin;

static inline ::VROSC::CompressionManager* New_ctor() ;

/// @brief Method SetCompressionParameter, addr 0x183c208, size 0xb0, virtual false, abstract: false, final false
inline void SetCompressionParameter(::StringW  name, float_t  amount, ::UnityEngine::AnimationCurve*  curve, float_t  min, float_t  max) ;

/// @brief Method SetDrumsCompression, addr 0x183c17c, size 0x8c, virtual false, abstract: false, final false
inline void SetDrumsCompression(float_t  compression) ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__makeupCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__makeupCurve() ;

constexpr float_t const& __cordl_internal_get__makeupMax() const;

constexpr float_t& __cordl_internal_get__makeupMax() ;

constexpr float_t const& __cordl_internal_get__makeupMin() const;

constexpr float_t& __cordl_internal_get__makeupMin() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__thresholdCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__thresholdCurve() ;

constexpr float_t const& __cordl_internal_get__thresholdMax() const;

constexpr float_t& __cordl_internal_get__thresholdMax() ;

constexpr float_t const& __cordl_internal_get__thresholdMin() const;

constexpr float_t& __cordl_internal_get__thresholdMin() ;

constexpr void __cordl_internal_set__makeupCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__makeupMax(float_t  value) ;

constexpr void __cordl_internal_set__makeupMin(float_t  value) ;

constexpr void __cordl_internal_set__thresholdCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__thresholdMax(float_t  value) ;

constexpr void __cordl_internal_set__thresholdMin(float_t  value) ;

/// @brief Method .ctor, addr 0x183c2b8, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CompressionManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CompressionManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CompressionManager(CompressionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompressionManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompressionManager(CompressionManager const& ) = delete;

/// @brief Field DrumsMakeupString offset 0xffffffff size 0x8
static constexpr ::ConstString  DrumsMakeupString{u"DrumsCompressionMakeup"};

/// @brief Field DrumsThreshholdString offset 0xffffffff size 0x8
static constexpr ::ConstString  DrumsThreshholdString{u"DrumsCompressionThreshold"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{376};

/// @brief Field _thresholdMin, offset: 0x20, size: 0x4, def value: None
 float_t  ____thresholdMin;

/// @brief Field _thresholdMax, offset: 0x24, size: 0x4, def value: None
 float_t  ____thresholdMax;

/// @brief Field _thresholdCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____thresholdCurve;

/// @brief Field _makeupMin, offset: 0x30, size: 0x4, def value: None
 float_t  ____makeupMin;

/// @brief Field _makeupMax, offset: 0x34, size: 0x4, def value: None
 float_t  ____makeupMax;

/// @brief Field _makeupCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____makeupCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CompressionManager, ____thresholdMin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::CompressionManager, ____thresholdMax) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::CompressionManager, ____thresholdCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::CompressionManager, ____makeupMin) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::CompressionManager, ____makeupMax) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::CompressionManager, ____makeupCurve) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CompressionManager, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::CompressionManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CompressionManager*, "VROSC", "CompressionManager");
