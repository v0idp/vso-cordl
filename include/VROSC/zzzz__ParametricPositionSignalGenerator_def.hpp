#pragma once
// IWYU pragma private; include "VROSC/ParametricPositionSignalGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "AudioHelm/zzzz__Param_def.hpp"
#include "VROSC/zzzz__SignalNode_def.hpp"
CORDL_MODULE_EXPORT(ParametricPositionSignalGenerator)
namespace VROSC {
class InstrumentController;
}
// Forward declare root types
namespace VROSC {
class ParametricPositionSignalGenerator;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ParametricPositionSignalGenerator);
// Dependencies AudioHelm.Param, VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ParametricPositionSignalGenerator
class CORDL_TYPE ParametricPositionSignalGenerator : public ::VROSC::SignalNode {
public:
// Declarations
/// @brief Field _instrument, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrument, put=__cordl_internal_set__instrument)) ::UnityW<::VROSC::InstrumentController>  _instrument;

/// @brief Field _paramX, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__paramX, put=__cordl_internal_set__paramX)) ::AudioHelm::Param  _paramX;

/// @brief Field _paramY, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__paramY, put=__cordl_internal_set__paramY)) ::AudioHelm::Param  _paramY;

/// @brief Field _paramZ, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__paramZ, put=__cordl_internal_set__paramZ)) ::AudioHelm::Param  _paramZ;

/// @brief Field _setup, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__setup, put=__cordl_internal_set__setup)) bool  _setup;

static inline ::VROSC::ParametricPositionSignalGenerator* New_ctor() ;

/// @brief Method OnEnable, addr 0x1724e3c, size 0x8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResetGenerator, addr 0x1724c70, size 0x4, virtual false, abstract: false, final false
inline void ResetGenerator() ;

/// @brief Method SendPositionalSignal, addr 0x1724c74, size 0x1c8, virtual false, abstract: false, final false
inline void SendPositionalSignal() ;

/// @brief Method Setup, addr 0x1724c60, size 0x10, virtual false, abstract: false, final false
inline void Setup(::VROSC::InstrumentController*  instrument) ;

constexpr ::UnityW<::VROSC::InstrumentController> const& __cordl_internal_get__instrument() const;

constexpr ::UnityW<::VROSC::InstrumentController>& __cordl_internal_get__instrument() ;

constexpr ::AudioHelm::Param const& __cordl_internal_get__paramX() const;

constexpr ::AudioHelm::Param& __cordl_internal_get__paramX() ;

constexpr ::AudioHelm::Param const& __cordl_internal_get__paramY() const;

constexpr ::AudioHelm::Param& __cordl_internal_get__paramY() ;

constexpr ::AudioHelm::Param const& __cordl_internal_get__paramZ() const;

constexpr ::AudioHelm::Param& __cordl_internal_get__paramZ() ;

constexpr bool const& __cordl_internal_get__setup() const;

constexpr bool& __cordl_internal_get__setup() ;

constexpr void __cordl_internal_set__instrument(::UnityW<::VROSC::InstrumentController>  value) ;

constexpr void __cordl_internal_set__paramX(::AudioHelm::Param  value) ;

constexpr void __cordl_internal_set__paramY(::AudioHelm::Param  value) ;

constexpr void __cordl_internal_set__paramZ(::AudioHelm::Param  value) ;

constexpr void __cordl_internal_set__setup(bool  value) ;

/// @brief Method .ctor, addr 0x1724e44, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParametricPositionSignalGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParametricPositionSignalGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParametricPositionSignalGenerator(ParametricPositionSignalGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParametricPositionSignalGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParametricPositionSignalGenerator(ParametricPositionSignalGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1007};

/// @brief Field _paramX, offset: 0x48, size: 0x4, def value: None
 ::AudioHelm::Param  ____paramX;

/// @brief Field _paramY, offset: 0x4c, size: 0x4, def value: None
 ::AudioHelm::Param  ____paramY;

/// @brief Field _paramZ, offset: 0x50, size: 0x4, def value: None
 ::AudioHelm::Param  ____paramZ;

/// @brief Field _instrument, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::InstrumentController>  ____instrument;

/// @brief Field _setup, offset: 0x60, size: 0x1, def value: None
 bool  ____setup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ParametricPositionSignalGenerator, ____paramX) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::ParametricPositionSignalGenerator, ____paramY) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ParametricPositionSignalGenerator, ____paramZ) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::ParametricPositionSignalGenerator, ____instrument) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::ParametricPositionSignalGenerator, ____setup) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ParametricPositionSignalGenerator, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ParametricPositionSignalGenerator);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ParametricPositionSignalGenerator*, "VROSC", "ParametricPositionSignalGenerator");
