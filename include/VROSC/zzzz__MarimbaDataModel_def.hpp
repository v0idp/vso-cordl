#pragma once
// IWYU pragma private; include "VROSC/MarimbaDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SynthDataModel_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MarimbaDataModel)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace VROSC {
class MarimbaDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MarimbaDataModel);
// Dependencies VROSC.SynthDataModel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MarimbaDataModel
class CORDL_TYPE MarimbaDataModel : public ::VROSC::SynthDataModel {
public:
// Declarations
/// @brief Field SequenceSteps, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_SequenceSteps, put=__cordl_internal_set_SequenceSteps)) ::System::Collections::Generic::List_1<int32_t>*  SequenceSteps;

/// @brief Field SequencerReferenceNote, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SequencerReferenceNote, put=__cordl_internal_set_SequencerReferenceNote)) int32_t  SequencerReferenceNote;

static inline ::VROSC::MarimbaDataModel* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_SequenceSteps() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_SequenceSteps() ;

constexpr int32_t const& __cordl_internal_get_SequencerReferenceNote() const;

constexpr int32_t& __cordl_internal_get_SequencerReferenceNote() ;

constexpr void __cordl_internal_set_SequenceSteps(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_SequencerReferenceNote(int32_t  value) ;

/// @brief Method .ctor, addr 0x183e2d8, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MarimbaDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MarimbaDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MarimbaDataModel(MarimbaDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MarimbaDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MarimbaDataModel(MarimbaDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{392};

/// @brief Field SequencerReferenceNote, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___SequencerReferenceNote;

/// @brief Field SequenceSteps, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___SequenceSteps;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MarimbaDataModel, ___SequencerReferenceNote) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaDataModel, ___SequenceSteps) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MarimbaDataModel, 0x78>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MarimbaDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MarimbaDataModel*, "VROSC", "MarimbaDataModel");
