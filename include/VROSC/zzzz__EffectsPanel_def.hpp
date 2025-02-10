#pragma once
// IWYU pragma private; include "VROSC/EffectsPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EffectsPanel)
namespace VROSC {
class AnimatedPanel;
}
namespace VROSC {
class ExternalEffectsPanel;
}
namespace VROSC {
class InternalEffectsPanel;
}
namespace VROSC {
class ResetableMover;
}
namespace VROSC {
class SynthController;
}
// Forward declare root types
namespace VROSC {
class EffectsPanel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::EffectsPanel);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.EffectsPanel
class CORDL_TYPE EffectsPanel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _animation, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__animation, put=__cordl_internal_set__animation)) ::UnityW<::VROSC::AnimatedPanel>  _animation;

/// @brief Field _externalEffectsPanel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__externalEffectsPanel, put=__cordl_internal_set__externalEffectsPanel)) ::UnityW<::VROSC::ExternalEffectsPanel>  _externalEffectsPanel;

/// @brief Field _instrument, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrument, put=__cordl_internal_set__instrument)) ::UnityW<::VROSC::SynthController>  _instrument;

/// @brief Field _internalEffectsPanel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__internalEffectsPanel, put=__cordl_internal_set__internalEffectsPanel)) ::UnityW<::VROSC::InternalEffectsPanel>  _internalEffectsPanel;

/// @brief Field _resetableMover, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__resetableMover, put=__cordl_internal_set__resetableMover)) ::UnityW<::VROSC::ResetableMover>  _resetableMover;

static inline ::VROSC::EffectsPanel* New_ctor() ;

/// @brief Method OnDestroy, addr 0x178ab18, size 0x1c4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ResetPanel, addr 0x178acdc, size 0x28, virtual false, abstract: false, final false
inline void ResetPanel() ;

/// @brief Method SetActive, addr 0x17843a8, size 0x144, virtual false, abstract: false, final false
inline void SetActive(bool  shouldBeOpen, bool  animate) ;

/// @brief Method Setup, addr 0x178a8ac, size 0x1b8, virtual false, abstract: false, final false
inline void Setup(::VROSC::SynthController*  instrument) ;

/// @brief Method SynthesizerChanged, addr 0x178adb8, size 0x60, virtual false, abstract: false, final false
inline void SynthesizerChanged(bool  useExternal) ;

constexpr ::UnityW<::VROSC::AnimatedPanel> const& __cordl_internal_get__animation() const;

constexpr ::UnityW<::VROSC::AnimatedPanel>& __cordl_internal_get__animation() ;

constexpr ::UnityW<::VROSC::ExternalEffectsPanel> const& __cordl_internal_get__externalEffectsPanel() const;

constexpr ::UnityW<::VROSC::ExternalEffectsPanel>& __cordl_internal_get__externalEffectsPanel() ;

constexpr ::UnityW<::VROSC::SynthController> const& __cordl_internal_get__instrument() const;

constexpr ::UnityW<::VROSC::SynthController>& __cordl_internal_get__instrument() ;

constexpr ::UnityW<::VROSC::InternalEffectsPanel> const& __cordl_internal_get__internalEffectsPanel() const;

constexpr ::UnityW<::VROSC::InternalEffectsPanel>& __cordl_internal_get__internalEffectsPanel() ;

constexpr ::UnityW<::VROSC::ResetableMover> const& __cordl_internal_get__resetableMover() const;

constexpr ::UnityW<::VROSC::ResetableMover>& __cordl_internal_get__resetableMover() ;

constexpr void __cordl_internal_set__animation(::UnityW<::VROSC::AnimatedPanel>  value) ;

constexpr void __cordl_internal_set__externalEffectsPanel(::UnityW<::VROSC::ExternalEffectsPanel>  value) ;

constexpr void __cordl_internal_set__instrument(::UnityW<::VROSC::SynthController>  value) ;

constexpr void __cordl_internal_set__internalEffectsPanel(::UnityW<::VROSC::InternalEffectsPanel>  value) ;

constexpr void __cordl_internal_set__resetableMover(::UnityW<::VROSC::ResetableMover>  value) ;

/// @brief Method .ctor, addr 0x178ae18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EffectsPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EffectsPanel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EffectsPanel(EffectsPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EffectsPanel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EffectsPanel(EffectsPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1326};

/// @brief Field _internalEffectsPanel, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::InternalEffectsPanel>  ____internalEffectsPanel;

/// @brief Field _externalEffectsPanel, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::ExternalEffectsPanel>  ____externalEffectsPanel;

/// @brief Field _animation, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::AnimatedPanel>  ____animation;

/// @brief Field _resetableMover, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::ResetableMover>  ____resetableMover;

/// @brief Field _instrument, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::SynthController>  ____instrument;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::EffectsPanel, ____internalEffectsPanel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::EffectsPanel, ____externalEffectsPanel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::EffectsPanel, ____animation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::EffectsPanel, ____resetableMover) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::EffectsPanel, ____instrument) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::EffectsPanel, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::EffectsPanel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EffectsPanel*, "VROSC", "EffectsPanel");
