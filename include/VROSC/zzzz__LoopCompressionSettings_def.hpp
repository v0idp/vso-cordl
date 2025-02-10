#pragma once
// IWYU pragma private; include "VROSC/LoopCompressionSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LoopCompressionSettings)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace VROSC {
class LoopCompressionSettings;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopCompressionSettings);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopCompressionSettings
class CORDL_TYPE LoopCompressionSettings : public ::System::Object {
public:
// Declarations
/// @brief Field _curve, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::UnityEngine::AnimationCurve*  _curve;

/// @brief Field _hardCap, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__hardCap, put=__cordl_internal_set__hardCap)) float_t  _hardCap;

/// @brief Field _softCap, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__softCap, put=__cordl_internal_set__softCap)) float_t  _softCap;

/// @brief Method Compress, addr 0x18920bc, size 0x1a4, virtual false, abstract: false, final false
inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> Compress(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audio) ;

/// @brief Method GetLoudestValue, addr 0x1892260, size 0x104, virtual false, abstract: false, final false
inline float_t GetLoudestValue(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audio) ;

static inline ::VROSC::LoopCompressionSettings* New_ctor() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__curve() ;

constexpr float_t const& __cordl_internal_get__hardCap() const;

constexpr float_t& __cordl_internal_get__hardCap() ;

constexpr float_t const& __cordl_internal_get__softCap() const;

constexpr float_t& __cordl_internal_get__softCap() ;

constexpr void __cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__hardCap(float_t  value) ;

constexpr void __cordl_internal_set__softCap(float_t  value) ;

/// @brief Method .ctor, addr 0x1892364, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopCompressionSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopCompressionSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopCompressionSettings(LoopCompressionSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopCompressionSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopCompressionSettings(LoopCompressionSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{638};

/// @brief Field _softCap, offset: 0x10, size: 0x4, def value: None
 float_t  ____softCap;

/// @brief Field _hardCap, offset: 0x14, size: 0x4, def value: None
 float_t  ____hardCap;

/// @brief Field _curve, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____curve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopCompressionSettings, ____softCap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopCompressionSettings, ____hardCap) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopCompressionSettings, ____curve) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopCompressionSettings, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopCompressionSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopCompressionSettings*, "VROSC", "LoopCompressionSettings");
