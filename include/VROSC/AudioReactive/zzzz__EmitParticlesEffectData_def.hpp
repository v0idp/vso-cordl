#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/EmitParticlesEffectData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/AudioReactive/zzzz__AudioReactiveEffectData_def.hpp"
CORDL_MODULE_EXPORT(EmitParticlesEffectData)
namespace VROSC {
class MinMaxInt;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class EmitParticlesEffectData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::EmitParticlesEffectData);
// Dependencies VROSC.AudioReactive.AudioReactiveEffectData
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.EmitParticlesEffectData
class CORDL_TYPE EmitParticlesEffectData : public ::VROSC::AudioReactive::AudioReactiveEffectData {
public:
// Declarations
 __declspec(property(get=get_Amount)) ::VROSC::MinMaxInt*  Amount;

/// @brief Field _amount, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__amount, put=__cordl_internal_set__amount)) ::VROSC::MinMaxInt*  _amount;

static inline ::VROSC::AudioReactive::EmitParticlesEffectData* New_ctor() ;

constexpr ::VROSC::MinMaxInt* const& __cordl_internal_get__amount() const;

constexpr ::VROSC::MinMaxInt*& __cordl_internal_get__amount() ;

constexpr void __cordl_internal_set__amount(::VROSC::MinMaxInt*  value) ;

/// @brief Method .ctor, addr 0x17d925c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Amount, addr 0x17d9254, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::MinMaxInt* get_Amount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EmitParticlesEffectData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EmitParticlesEffectData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmitParticlesEffectData(EmitParticlesEffectData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmitParticlesEffectData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmitParticlesEffectData(EmitParticlesEffectData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1545};

/// @brief Field _amount, offset: 0x18, size: 0x8, def value: None
 ::VROSC::MinMaxInt*  ____amount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::EmitParticlesEffectData, ____amount) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::EmitParticlesEffectData, 0x20>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::EmitParticlesEffectData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::EmitParticlesEffectData*, "VROSC.AudioReactive", "EmitParticlesEffectData");
