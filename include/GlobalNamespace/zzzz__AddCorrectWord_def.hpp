#pragma once
// IWYU pragma private; include "GlobalNamespace/AddCorrectWord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AddCorrectWord)
namespace GlobalNamespace {
class AutocompleteWordPicker;
}
// Forward declare root types
namespace GlobalNamespace {
class AddCorrectWord;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AddCorrectWord);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AddCorrectWord
class CORDL_TYPE AddCorrectWord : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field wordPicker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_wordPicker, put=__cordl_internal_set_wordPicker)) ::UnityW<::GlobalNamespace::AutocompleteWordPicker>  wordPicker;

static inline ::GlobalNamespace::AddCorrectWord* New_ctor() ;

/// @brief Method Start, addr 0x16bb110, size 0x60, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method WordChosen, addr 0x16bb170, size 0x80, virtual false, abstract: false, final false
inline void WordChosen() ;

constexpr ::UnityW<::GlobalNamespace::AutocompleteWordPicker> const& __cordl_internal_get_wordPicker() const;

constexpr ::UnityW<::GlobalNamespace::AutocompleteWordPicker>& __cordl_internal_get_wordPicker() ;

constexpr void __cordl_internal_set_wordPicker(::UnityW<::GlobalNamespace::AutocompleteWordPicker>  value) ;

/// @brief Method .ctor, addr 0x16bb5ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddCorrectWord() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddCorrectWord", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AddCorrectWord(AddCorrectWord && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddCorrectWord", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddCorrectWord(AddCorrectWord const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17};

/// @brief Field wordPicker, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AutocompleteWordPicker>  ___wordPicker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AddCorrectWord, ___wordPicker) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AddCorrectWord, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AddCorrectWord);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AddCorrectWord*, "", "AddCorrectWord");
