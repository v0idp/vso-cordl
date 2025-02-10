#pragma once
// IWYU pragma private; include "VROSC/MarimbaDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SynthDataController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MarimbaDataController)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class MarimbaDataModel;
}
// Forward declare root types
namespace VROSC {
class MarimbaDataController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MarimbaDataController);
// Dependencies VROSC.SynthDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MarimbaDataController
class CORDL_TYPE MarimbaDataController : public ::VROSC::SynthDataController {
public:
// Declarations
 __declspec(property(get=get_MarimbaDataModel)) ::VROSC::MarimbaDataModel*  MarimbaDataModel;

 __declspec(property(get=get_SequenceSteps, put=set_SequenceSteps)) ::System::Collections::Generic::List_1<int32_t>*  SequenceSteps;

 __declspec(property(get=get_SequencerReferenceNote, put=set_SequencerReferenceNote)) int32_t  SequencerReferenceNote;

static inline ::VROSC::MarimbaDataController* New_ctor() ;

/// @brief Method .ctor, addr 0x183e1e4, size 0xf4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MarimbaDataModel, addr 0x183e16c, size 0x78, virtual false, abstract: false, final false
inline ::VROSC::MarimbaDataModel* get_MarimbaDataModel() ;

/// @brief Method get_SequenceSteps, addr 0x183e3b8, size 0x1c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* get_SequenceSteps() ;

/// @brief Method get_SequencerReferenceNote, addr 0x183e35c, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_SequencerReferenceNote() ;

/// @brief Method set_SequenceSteps, addr 0x183e3d4, size 0x40, virtual false, abstract: false, final false
inline void set_SequenceSteps(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method set_SequencerReferenceNote, addr 0x183e378, size 0x40, virtual false, abstract: false, final false
inline void set_SequencerReferenceNote(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MarimbaDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MarimbaDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MarimbaDataController(MarimbaDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MarimbaDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MarimbaDataController(MarimbaDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{391};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::MarimbaDataController, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MarimbaDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MarimbaDataController*, "VROSC", "MarimbaDataController");
