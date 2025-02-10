#pragma once
// IWYU pragma private; include "VROSC/Tutorial.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Tutorial)
namespace VROSC {
class TutorialStep;
}
// Forward declare root types
namespace VROSC {
class Tutorial;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Tutorial);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Tutorial
class CORDL_TYPE Tutorial : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Id)) ::StringW  Id;

 __declspec(property(get=get_Steps)) ::ArrayW<::UnityW<::VROSC::TutorialStep>,::Array<::UnityW<::VROSC::TutorialStep>>*>  Steps;

/// @brief Field _id, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) ::StringW  _id;

/// @brief Field _steps, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__steps, put=__cordl_internal_set__steps)) ::ArrayW<::UnityW<::VROSC::TutorialStep>,::Array<::UnityW<::VROSC::TutorialStep>>*>  _steps;

/// @brief Method GetStepIndex, addr 0x170415c, size 0x54, virtual false, abstract: false, final false
inline int32_t GetStepIndex(::VROSC::TutorialStep*  step) ;

static inline ::VROSC::Tutorial* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__id() const;

constexpr ::StringW& __cordl_internal_get__id() ;

constexpr ::ArrayW<::UnityW<::VROSC::TutorialStep>,::Array<::UnityW<::VROSC::TutorialStep>>*> const& __cordl_internal_get__steps() const;

constexpr ::ArrayW<::UnityW<::VROSC::TutorialStep>,::Array<::UnityW<::VROSC::TutorialStep>>*>& __cordl_internal_get__steps() ;

constexpr void __cordl_internal_set__id(::StringW  value) ;

constexpr void __cordl_internal_set__steps(::ArrayW<::UnityW<::VROSC::TutorialStep>,::Array<::UnityW<::VROSC::TutorialStep>>*>  value) ;

/// @brief Method .ctor, addr 0x17041b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Id, addr 0x170414c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Id() ;

/// @brief Method get_Steps, addr 0x1704154, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::VROSC::TutorialStep>,::Array<::UnityW<::VROSC::TutorialStep>>*> get_Steps() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Tutorial() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Tutorial", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tutorial(Tutorial && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tutorial", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tutorial(Tutorial const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{848};

/// @brief Field _id, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____id;

/// @brief Field _steps, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::TutorialStep>,::Array<::UnityW<::VROSC::TutorialStep>>*>  ____steps;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Tutorial, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::Tutorial, ____steps) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Tutorial, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::Tutorial);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Tutorial*, "VROSC", "Tutorial");
