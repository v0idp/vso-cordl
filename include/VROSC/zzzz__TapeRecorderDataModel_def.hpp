#pragma once
// IWYU pragma private; include "VROSC/TapeRecorderDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__ToolDataModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TapeRecorderDataModel)
// Forward declare root types
namespace VROSC {
class TapeRecorderDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TapeRecorderDataModel);
// Dependencies VROSC.ToolDataModel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TapeRecorderDataModel
class CORDL_TYPE TapeRecorderDataModel : public ::VROSC::ToolDataModel {
public:
// Declarations
 __declspec(property(get=get_Key)) ::StringW  Key;

/// @brief Field NormalizeMultiplier, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_NormalizeMultiplier, put=__cordl_internal_set_NormalizeMultiplier)) float_t  NormalizeMultiplier;

/// @brief Field UseAsPreview, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseAsPreview, put=__cordl_internal_set_UseAsPreview)) bool  UseAsPreview;

 __declspec(property(get=get_Version)) int32_t  Version;

static inline ::VROSC::TapeRecorderDataModel* New_ctor() ;

constexpr float_t const& __cordl_internal_get_NormalizeMultiplier() const;

constexpr float_t& __cordl_internal_get_NormalizeMultiplier() ;

constexpr bool const& __cordl_internal_get_UseAsPreview() const;

constexpr bool& __cordl_internal_get_UseAsPreview() ;

constexpr void __cordl_internal_set_NormalizeMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_UseAsPreview(bool  value) ;

/// @brief Method .ctor, addr 0x187498c, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Key, addr 0x1876638, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Key() ;

/// @brief Method get_Version, addr 0x1876678, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TapeRecorderDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TapeRecorderDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TapeRecorderDataModel(TapeRecorderDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TapeRecorderDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TapeRecorderDataModel(TapeRecorderDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{551};

/// @brief Field NormalizeMultiplier, offset: 0x30, size: 0x4, def value: None
 float_t  ___NormalizeMultiplier;

/// @brief Field UseAsPreview, offset: 0x34, size: 0x1, def value: None
 bool  ___UseAsPreview;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TapeRecorderDataModel, ___NormalizeMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataModel, ___UseAsPreview) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TapeRecorderDataModel, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TapeRecorderDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TapeRecorderDataModel*, "VROSC", "TapeRecorderDataModel");
