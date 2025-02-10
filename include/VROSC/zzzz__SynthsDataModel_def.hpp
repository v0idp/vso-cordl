#pragma once
// IWYU pragma private; include "VROSC/SynthsDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__BaseDataModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SynthsDataModel)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class SynthData;
}
// Forward declare root types
namespace VROSC {
class SynthsDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SynthsDataModel);
// Dependencies VROSC.BaseDataModel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SynthsDataModel
class CORDL_TYPE SynthsDataModel : public ::VROSC::BaseDataModel {
public:
// Declarations
 __declspec(property(get=get_Key)) ::StringW  Key;

/// @brief Field Synths, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Synths, put=__cordl_internal_set_Synths)) ::System::Collections::Generic::List_1<::VROSC::SynthData*>*  Synths;

 __declspec(property(get=get_Version)) int32_t  Version;

static inline ::VROSC::SynthsDataModel* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::SynthData*>* const& __cordl_internal_get_Synths() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::SynthData*>*& __cordl_internal_get_Synths() ;

constexpr void __cordl_internal_set_Synths(::System::Collections::Generic::List_1<::VROSC::SynthData*>*  value) ;

/// @brief Method .ctor, addr 0x184429c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Key, addr 0x18492b4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Key() ;

/// @brief Method get_Version, addr 0x18492f4, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthsDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthsDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthsDataModel(SynthsDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthsDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthsDataModel(SynthsDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{414};

/// @brief Field Synths, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::SynthData*>*  ___Synths;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SynthsDataModel, ___Synths) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SynthsDataModel, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SynthsDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthsDataModel*, "VROSC", "SynthsDataModel");
