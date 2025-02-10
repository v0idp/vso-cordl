#pragma once
// IWYU pragma private; include "GlobalNamespace/AutocompleteWordPicker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AutocompleteWordPicker)
namespace GlobalNamespace {
class NGramGenerator;
}
namespace UnityEngine::UI {
class InputField;
}
// Forward declare root types
namespace GlobalNamespace {
class AutocompleteWordPicker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AutocompleteWordPicker);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AutocompleteWordPicker
class CORDL_TYPE AutocompleteWordPicker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field TextField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TextField, put=__cordl_internal_set_TextField)) ::UnityW<::UnityEngine::UI::InputField>  TextField;

/// @brief Field WordPredictor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_WordPredictor, put=__cordl_internal_set_WordPredictor)) ::UnityW<::GlobalNamespace::NGramGenerator>  WordPredictor;

static inline ::GlobalNamespace::AutocompleteWordPicker* New_ctor() ;

/// @brief Method ReplaceWord, addr 0x16bb1f0, size 0x3bc, virtual false, abstract: false, final false
inline void ReplaceWord(::StringW  correctWord) ;

/// @brief Method ReverseString, addr 0x16bb9f8, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW ReverseString(::StringW  s) ;

constexpr ::UnityW<::UnityEngine::UI::InputField> const& __cordl_internal_get_TextField() const;

constexpr ::UnityW<::UnityEngine::UI::InputField>& __cordl_internal_get_TextField() ;

constexpr ::UnityW<::GlobalNamespace::NGramGenerator> const& __cordl_internal_get_WordPredictor() const;

constexpr ::UnityW<::GlobalNamespace::NGramGenerator>& __cordl_internal_get_WordPredictor() ;

constexpr void __cordl_internal_set_TextField(::UnityW<::UnityEngine::UI::InputField>  value) ;

constexpr void __cordl_internal_set_WordPredictor(::UnityW<::GlobalNamespace::NGramGenerator>  value) ;

/// @brief Method .ctor, addr 0x16bba64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutocompleteWordPicker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutocompleteWordPicker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AutocompleteWordPicker(AutocompleteWordPicker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutocompleteWordPicker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutocompleteWordPicker(AutocompleteWordPicker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18};

/// @brief Field TextField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::InputField>  ___TextField;

/// @brief Field WordPredictor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NGramGenerator>  ___WordPredictor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AutocompleteWordPicker, ___TextField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutocompleteWordPicker, ___WordPredictor) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AutocompleteWordPicker, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AutocompleteWordPicker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutocompleteWordPicker*, "", "AutocompleteWordPicker");
