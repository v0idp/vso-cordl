#pragma once
// IWYU pragma private; include "VROSC/OctaveData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OctaveData)
// Forward declare root types
namespace VROSC {
class OctaveData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::OctaveData);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.OctaveData
class CORDL_TYPE OctaveData : public ::System::Object {
public:
// Declarations
/// @brief Field MaxOctave, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxOctave, put=__cordl_internal_set_MaxOctave)) int32_t  MaxOctave;

/// @brief Field MinOctave, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinOctave, put=__cordl_internal_set_MinOctave)) int32_t  MinOctave;

/// @brief Field SelectedOctave, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_SelectedOctave, put=__cordl_internal_set_SelectedOctave)) int32_t  SelectedOctave;

static inline ::VROSC::OctaveData* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_MaxOctave() const;

constexpr int32_t& __cordl_internal_get_MaxOctave() ;

constexpr int32_t const& __cordl_internal_get_MinOctave() const;

constexpr int32_t& __cordl_internal_get_MinOctave() ;

constexpr int32_t const& __cordl_internal_get_SelectedOctave() const;

constexpr int32_t& __cordl_internal_get_SelectedOctave() ;

constexpr void __cordl_internal_set_MaxOctave(int32_t  value) ;

constexpr void __cordl_internal_set_MinOctave(int32_t  value) ;

constexpr void __cordl_internal_set_SelectedOctave(int32_t  value) ;

/// @brief Method .ctor, addr 0x1841d08, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OctaveData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OctaveData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OctaveData(OctaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OctaveData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OctaveData(OctaveData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{403};

/// @brief Field SelectedOctave, offset: 0x10, size: 0x4, def value: None
 int32_t  ___SelectedOctave;

/// @brief Field MinOctave, offset: 0x14, size: 0x4, def value: None
 int32_t  ___MinOctave;

/// @brief Field MaxOctave, offset: 0x18, size: 0x4, def value: None
 int32_t  ___MaxOctave;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::OctaveData, ___SelectedOctave) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::OctaveData, ___MinOctave) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::OctaveData, ___MaxOctave) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::OctaveData, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::OctaveData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OctaveData*, "VROSC", "OctaveData");
