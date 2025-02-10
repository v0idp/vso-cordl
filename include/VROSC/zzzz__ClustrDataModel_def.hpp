#pragma once
// IWYU pragma private; include "VROSC/ClustrDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SynthDataModel_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClustrDataModel)
// Forward declare root types
namespace VROSC {
class ClustrDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ClustrDataModel);
// Dependencies VROSC.SynthDataModel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ClustrDataModel
class CORDL_TYPE ClustrDataModel : public ::VROSC::SynthDataModel {
public:
// Declarations
/// @brief Field AvoidTritone, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_AvoidTritone, put=__cordl_internal_set_AvoidTritone)) bool  AvoidTritone;

/// @brief Field BassOctave, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_BassOctave, put=__cordl_internal_set_BassOctave)) int32_t  BassOctave;

/// @brief Field Strum, offset 0x6a, size 0x1 
 __declspec(property(get=__cordl_internal_get_Strum, put=__cordl_internal_set_Strum)) bool  Strum;

/// @brief Field StrumSpeed, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_StrumSpeed, put=__cordl_internal_set_StrumSpeed)) int32_t  StrumSpeed;

static inline ::VROSC::ClustrDataModel* New_ctor() ;

constexpr bool const& __cordl_internal_get_AvoidTritone() const;

constexpr bool& __cordl_internal_get_AvoidTritone() ;

constexpr int32_t const& __cordl_internal_get_BassOctave() const;

constexpr int32_t& __cordl_internal_get_BassOctave() ;

constexpr bool const& __cordl_internal_get_Strum() const;

constexpr bool& __cordl_internal_get_Strum() ;

constexpr int32_t const& __cordl_internal_get_StrumSpeed() const;

constexpr int32_t& __cordl_internal_get_StrumSpeed() ;

constexpr void __cordl_internal_set_AvoidTritone(bool  value) ;

constexpr void __cordl_internal_set_BassOctave(int32_t  value) ;

constexpr void __cordl_internal_set_Strum(bool  value) ;

constexpr void __cordl_internal_set_StrumSpeed(int32_t  value) ;

/// @brief Method .ctor, addr 0x183cff4, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClustrDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClustrDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClustrDataModel(ClustrDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClustrDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClustrDataModel(ClustrDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{383};

/// @brief Field Strum, offset: 0x6a, size: 0x1, def value: None
 bool  ___Strum;

/// @brief Field StrumSpeed, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___StrumSpeed;

/// @brief Field AvoidTritone, offset: 0x70, size: 0x1, def value: None
 bool  ___AvoidTritone;

/// @brief Field BassOctave, offset: 0x74, size: 0x4, def value: None
 int32_t  ___BassOctave;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ClustrDataModel, ___Strum) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrDataModel, ___StrumSpeed) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrDataModel, ___AvoidTritone) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::ClustrDataModel, ___BassOctave) == 0x74, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ClustrDataModel, 0x78>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ClustrDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ClustrDataModel*, "VROSC", "ClustrDataModel");
