#pragma once
// IWYU pragma private; include "VROSC/ModularDrumsDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__InstrumentDataModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ModularDrumsDataModel)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class EmpadDataModel;
}
// Forward declare root types
namespace VROSC {
class ModularDrumsDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ModularDrumsDataModel);
// Dependencies VROSC.InstrumentDataModel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ModularDrumsDataModel
class CORDL_TYPE ModularDrumsDataModel : public ::VROSC::InstrumentDataModel {
public:
// Declarations
/// @brief Field Compression, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Compression, put=__cordl_internal_set_Compression)) float_t  Compression;

/// @brief Field DryVolume, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_DryVolume, put=__cordl_internal_set_DryVolume)) float_t  DryVolume;

/// @brief Field Empads, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Empads, put=__cordl_internal_set_Empads)) ::System::Collections::Generic::List_1<::VROSC::EmpadDataModel*>*  Empads;

 __declspec(property(get=get_Key)) ::StringW  Key;

/// @brief Field ReverbAmount, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReverbAmount, put=__cordl_internal_set_ReverbAmount)) float_t  ReverbAmount;

/// @brief Field ReverbLength, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReverbLength, put=__cordl_internal_set_ReverbLength)) float_t  ReverbLength;

 __declspec(property(get=get_Version)) int32_t  Version;

static inline ::VROSC::ModularDrumsDataModel* New_ctor() ;

constexpr float_t const& __cordl_internal_get_Compression() const;

constexpr float_t& __cordl_internal_get_Compression() ;

constexpr float_t const& __cordl_internal_get_DryVolume() const;

constexpr float_t& __cordl_internal_get_DryVolume() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::EmpadDataModel*>* const& __cordl_internal_get_Empads() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::EmpadDataModel*>*& __cordl_internal_get_Empads() ;

constexpr float_t const& __cordl_internal_get_ReverbAmount() const;

constexpr float_t& __cordl_internal_get_ReverbAmount() ;

constexpr float_t const& __cordl_internal_get_ReverbLength() const;

constexpr float_t& __cordl_internal_get_ReverbLength() ;

constexpr void __cordl_internal_set_Compression(float_t  value) ;

constexpr void __cordl_internal_set_DryVolume(float_t  value) ;

constexpr void __cordl_internal_set_Empads(::System::Collections::Generic::List_1<::VROSC::EmpadDataModel*>*  value) ;

constexpr void __cordl_internal_set_ReverbAmount(float_t  value) ;

constexpr void __cordl_internal_set_ReverbLength(float_t  value) ;

/// @brief Method .ctor, addr 0x1840fc8, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Key, addr 0x1840f80, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Key() ;

/// @brief Method get_Version, addr 0x1840fc0, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModularDrumsDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModularDrumsDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ModularDrumsDataModel(ModularDrumsDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModularDrumsDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModularDrumsDataModel(ModularDrumsDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{396};

/// @brief Field Empads, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::EmpadDataModel*>*  ___Empads;

/// @brief Field ReverbAmount, offset: 0x50, size: 0x4, def value: None
 float_t  ___ReverbAmount;

/// @brief Field ReverbLength, offset: 0x54, size: 0x4, def value: None
 float_t  ___ReverbLength;

/// @brief Field DryVolume, offset: 0x58, size: 0x4, def value: None
 float_t  ___DryVolume;

/// @brief Field Compression, offset: 0x5c, size: 0x4, def value: None
 float_t  ___Compression;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ModularDrumsDataModel, ___Empads) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::ModularDrumsDataModel, ___ReverbAmount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::ModularDrumsDataModel, ___ReverbLength) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::ModularDrumsDataModel, ___DryVolume) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::ModularDrumsDataModel, ___Compression) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ModularDrumsDataModel, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ModularDrumsDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ModularDrumsDataModel*, "VROSC", "ModularDrumsDataModel");
