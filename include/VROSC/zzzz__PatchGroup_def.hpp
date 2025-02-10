#pragma once
// IWYU pragma private; include "VROSC/PatchGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PatchGroup)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace VROSC {
class PatchGroup;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PatchGroup);
// Dependencies UnityEngine.ScriptableObject
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PatchGroup
class CORDL_TYPE PatchGroup : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_Patches)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  Patches;

/// @brief Field _patches, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__patches, put=__cordl_internal_set__patches)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  _patches;

/// @brief Method GetPatchName, addr 0x16f06c0, size 0xa8, virtual false, abstract: false, final false
static inline ::StringW GetPatchName(::System::Object*  patch) ;

static inline ::VROSC::PatchGroup* New_ctor() ;

/// @brief Method PatchIsDrums, addr 0x16f0768, size 0x78, virtual false, abstract: false, final false
static inline bool PatchIsDrums(::System::Object*  patch) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get__patches() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get__patches() ;

constexpr void __cordl_internal_set__patches(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

/// @brief Method .ctor, addr 0x16f07e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Patches, addr 0x16f06b8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* get_Patches() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PatchGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PatchGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PatchGroup(PatchGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PatchGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PatchGroup(PatchGroup const& ) = delete;

/// @brief Field DrumsName offset 0xffffffff size 0x8
static constexpr ::ConstString  DrumsName{u"Drums"};

/// @brief Field MicrophoneName offset 0xffffffff size 0x8
static constexpr ::ConstString  MicrophoneName{u"Microphone"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{773};

/// @brief Field _patches, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ____patches;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PatchGroup, ____patches) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PatchGroup, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PatchGroup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PatchGroup*, "VROSC", "PatchGroup");
