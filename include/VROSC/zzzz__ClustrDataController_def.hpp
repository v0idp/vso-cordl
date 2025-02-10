#pragma once
// IWYU pragma private; include "VROSC/ClustrDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SynthDataController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClustrDataController)
namespace VROSC {
class ClustrDataModel;
}
// Forward declare root types
namespace VROSC {
class ClustrDataController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ClustrDataController);
// Dependencies VROSC.SynthDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ClustrDataController
class CORDL_TYPE ClustrDataController : public ::VROSC::SynthDataController {
public:
// Declarations
 __declspec(property(get=get_AvoidTritone, put=set_AvoidTritone)) bool  AvoidTritone;

 __declspec(property(get=get_BassOctave, put=set_BassOctave)) int32_t  BassOctave;

 __declspec(property(get=get_ClustrDataModel)) ::VROSC::ClustrDataModel*  ClustrDataModel;

 __declspec(property(get=get_Strum, put=set_Strum)) bool  Strum;

 __declspec(property(get=get_StrumSpeed, put=set_StrumSpeed)) int32_t  StrumSpeed;

static inline ::VROSC::ClustrDataController* New_ctor() ;

/// @brief Method .ctor, addr 0x183cee8, size 0x10c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AvoidTritone, addr 0x183d0c8, size 0x1c, virtual false, abstract: false, final false
inline bool get_AvoidTritone() ;

/// @brief Method get_BassOctave, addr 0x183d128, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_BassOctave() ;

/// @brief Method get_ClustrDataModel, addr 0x183ce70, size 0x78, virtual false, abstract: false, final false
inline ::VROSC::ClustrDataModel* get_ClustrDataModel() ;

/// @brief Method get_Strum, addr 0x183d00c, size 0x1c, virtual false, abstract: false, final false
inline bool get_Strum() ;

/// @brief Method get_StrumSpeed, addr 0x183d06c, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_StrumSpeed() ;

/// @brief Method set_AvoidTritone, addr 0x183d0e4, size 0x44, virtual false, abstract: false, final false
inline void set_AvoidTritone(bool  value) ;

/// @brief Method set_BassOctave, addr 0x183d144, size 0x40, virtual false, abstract: false, final false
inline void set_BassOctave(int32_t  value) ;

/// @brief Method set_Strum, addr 0x183d028, size 0x44, virtual false, abstract: false, final false
inline void set_Strum(bool  value) ;

/// @brief Method set_StrumSpeed, addr 0x183d088, size 0x40, virtual false, abstract: false, final false
inline void set_StrumSpeed(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClustrDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClustrDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClustrDataController(ClustrDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClustrDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClustrDataController(ClustrDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{382};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::ClustrDataController, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ClustrDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ClustrDataController*, "VROSC", "ClustrDataController");
