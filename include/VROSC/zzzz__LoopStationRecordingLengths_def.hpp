#pragma once
// IWYU pragma private; include "VROSC/LoopStationRecordingLengths.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopStationRecordingLengths)
// Forward declare root types
namespace VROSC {
class LoopStationRecordingLengths;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationRecordingLengths);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationRecordingLengths
class CORDL_TYPE LoopStationRecordingLengths : public ::System::Object {
public:
// Declarations
/// @brief Field _parsedLoopLengths, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__parsedLoopLengths, put=setStaticF__parsedLoopLengths)) ::ArrayW<float_t,::Array<float_t>*>  _parsedLoopLengths;

/// @brief Field _possibleLoopLengths, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__possibleLoopLengths, put=setStaticF__possibleLoopLengths)) ::ArrayW<::StringW,::Array<::StringW>*>  _possibleLoopLengths;

/// @brief Method GetIndexOfLength, addr 0x18aeff0, size 0xc8, virtual false, abstract: false, final false
static inline int32_t GetIndexOfLength(float_t  length) ;

static inline ::ArrayW<float_t,::Array<float_t>*> getStaticF__parsedLoopLengths() ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF__possibleLoopLengths() ;

/// @brief Method get_MaxLoopLengthBars, addr 0x18bc284, size 0x7c, virtual false, abstract: false, final false
static inline float_t get_MaxLoopLengthBars() ;

/// @brief Method get_PossibleLoopLengthNames, addr 0x18bc1d4, size 0x58, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW,::Array<::StringW>*> get_PossibleLoopLengthNames() ;

/// @brief Method get_PossibleLoopLengths, addr 0x18bc22c, size 0x58, virtual false, abstract: false, final false
static inline ::ArrayW<float_t,::Array<float_t>*> get_PossibleLoopLengths() ;

static inline void setStaticF__parsedLoopLengths(::ArrayW<float_t,::Array<float_t>*>  value) ;

static inline void setStaticF__possibleLoopLengths(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationRecordingLengths() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationRecordingLengths", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationRecordingLengths(LoopStationRecordingLengths && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationRecordingLengths", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationRecordingLengths(LoopStationRecordingLengths const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{743};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationRecordingLengths, 0x10>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationRecordingLengths);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationRecordingLengths*, "VROSC", "LoopStationRecordingLengths");
