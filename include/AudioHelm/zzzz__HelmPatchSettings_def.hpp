#pragma once
// IWYU pragma private; include "AudioHelm/HelmPatchSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HelmPatchSettings)
namespace AudioHelm {
class HelmModulationSetting;
}
// Forward declare root types
namespace AudioHelm {
class HelmPatchSettings;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::HelmPatchSettings);
// Dependencies System.Object
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.HelmPatchSettings
class CORDL_TYPE HelmPatchSettings : public ::System::Object {
public:
// Declarations
/// @brief Field amp_attack, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_amp_attack, put=__cordl_internal_set_amp_attack)) float_t  amp_attack;

/// @brief Field amp_decay, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_amp_decay, put=__cordl_internal_set_amp_decay)) float_t  amp_decay;

/// @brief Field amp_release, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_amp_release, put=__cordl_internal_set_amp_release)) float_t  amp_release;

/// @brief Field amp_sustain, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_amp_sustain, put=__cordl_internal_set_amp_sustain)) float_t  amp_sustain;

/// @brief Field arp_frequency, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_arp_frequency, put=__cordl_internal_set_arp_frequency)) float_t  arp_frequency;

/// @brief Field arp_gate, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_arp_gate, put=__cordl_internal_set_arp_gate)) float_t  arp_gate;

/// @brief Field arp_octaves, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_arp_octaves, put=__cordl_internal_set_arp_octaves)) float_t  arp_octaves;

/// @brief Field arp_on, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_arp_on, put=__cordl_internal_set_arp_on)) float_t  arp_on;

/// @brief Field arp_pattern, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_arp_pattern, put=__cordl_internal_set_arp_pattern)) float_t  arp_pattern;

/// @brief Field arp_sync, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_arp_sync, put=__cordl_internal_set_arp_sync)) float_t  arp_sync;

/// @brief Field arp_tempo, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_arp_tempo, put=__cordl_internal_set_arp_tempo)) float_t  arp_tempo;

/// @brief Field beats_per_minute, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_beats_per_minute, put=__cordl_internal_set_beats_per_minute)) float_t  beats_per_minute;

/// @brief Field cross_modulation, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_cross_modulation, put=__cordl_internal_set_cross_modulation)) float_t  cross_modulation;

/// @brief Field cutoff, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_cutoff, put=__cordl_internal_set_cutoff)) float_t  cutoff;

/// @brief Field delay_dry_wet, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay_dry_wet, put=__cordl_internal_set_delay_dry_wet)) float_t  delay_dry_wet;

/// @brief Field delay_feedback, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay_feedback, put=__cordl_internal_set_delay_feedback)) float_t  delay_feedback;

/// @brief Field delay_frequency, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay_frequency, put=__cordl_internal_set_delay_frequency)) float_t  delay_frequency;

/// @brief Field delay_on, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay_on, put=__cordl_internal_set_delay_on)) float_t  delay_on;

/// @brief Field delay_sync, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay_sync, put=__cordl_internal_set_delay_sync)) float_t  delay_sync;

/// @brief Field delay_tempo, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay_tempo, put=__cordl_internal_set_delay_tempo)) float_t  delay_tempo;

/// @brief Field distortion_drive, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_distortion_drive, put=__cordl_internal_set_distortion_drive)) float_t  distortion_drive;

/// @brief Field distortion_mix, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_distortion_mix, put=__cordl_internal_set_distortion_mix)) float_t  distortion_mix;

/// @brief Field distortion_on, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_distortion_on, put=__cordl_internal_set_distortion_on)) float_t  distortion_on;

/// @brief Field distortion_type, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_distortion_type, put=__cordl_internal_set_distortion_type)) float_t  distortion_type;

/// @brief Field fil_attack, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_fil_attack, put=__cordl_internal_set_fil_attack)) float_t  fil_attack;

/// @brief Field fil_decay, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_fil_decay, put=__cordl_internal_set_fil_decay)) float_t  fil_decay;

/// @brief Field fil_env_depth, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_fil_env_depth, put=__cordl_internal_set_fil_env_depth)) float_t  fil_env_depth;

/// @brief Field fil_release, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fil_release, put=__cordl_internal_set_fil_release)) float_t  fil_release;

/// @brief Field fil_sustain, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_fil_sustain, put=__cordl_internal_set_fil_sustain)) float_t  fil_sustain;

/// @brief Field filter_blend, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_filter_blend, put=__cordl_internal_set_filter_blend)) float_t  filter_blend;

/// @brief Field filter_drive, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_filter_drive, put=__cordl_internal_set_filter_drive)) float_t  filter_drive;

/// @brief Field filter_on, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_filter_on, put=__cordl_internal_set_filter_on)) float_t  filter_on;

/// @brief Field filter_saturation, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_filter_saturation, put=__cordl_internal_set_filter_saturation)) float_t  filter_saturation;

/// @brief Field filter_shelf, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_filter_shelf, put=__cordl_internal_set_filter_shelf)) float_t  filter_shelf;

/// @brief Field filter_style, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_filter_style, put=__cordl_internal_set_filter_style)) float_t  filter_style;

/// @brief Field filter_type, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_filter_type, put=__cordl_internal_set_filter_type)) float_t  filter_type;

/// @brief Field formant_on, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_formant_on, put=__cordl_internal_set_formant_on)) float_t  formant_on;

/// @brief Field formant_x, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_formant_x, put=__cordl_internal_set_formant_x)) float_t  formant_x;

/// @brief Field formant_y, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_formant_y, put=__cordl_internal_set_formant_y)) float_t  formant_y;

/// @brief Field kModulationDestinations, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kModulationDestinations, put=setStaticF_kModulationDestinations)) ::ArrayW<::StringW,::Array<::StringW>*>  kModulationDestinations;

/// @brief Field kModulationSources, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kModulationSources, put=setStaticF_kModulationSources)) ::ArrayW<::StringW,::Array<::StringW>*>  kModulationSources;

/// @brief Field kShortenNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kShortenNames, put=setStaticF_kShortenNames)) ::ArrayW<::StringW,::Array<::StringW>*>  kShortenNames;

/// @brief Field keytrack, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_keytrack, put=__cordl_internal_set_keytrack)) float_t  keytrack;

/// @brief Field legato, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_legato, put=__cordl_internal_set_legato)) float_t  legato;

/// @brief Field mod_attack, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_mod_attack, put=__cordl_internal_set_mod_attack)) float_t  mod_attack;

/// @brief Field mod_decay, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_mod_decay, put=__cordl_internal_set_mod_decay)) float_t  mod_decay;

/// @brief Field mod_release, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_mod_release, put=__cordl_internal_set_mod_release)) float_t  mod_release;

/// @brief Field mod_sustain, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_mod_sustain, put=__cordl_internal_set_mod_sustain)) float_t  mod_sustain;

/// @brief Field modulations, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get_modulations, put=__cordl_internal_set_modulations)) ::ArrayW<::AudioHelm::HelmModulationSetting*,::Array<::AudioHelm::HelmModulationSetting*>*>  modulations;

/// @brief Field mono_lfo_1_amplitude, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_mono_lfo_1_amplitude, put=__cordl_internal_set_mono_lfo_1_amplitude)) float_t  mono_lfo_1_amplitude;

/// @brief Field mono_lfo_1_frequency, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_mono_lfo_1_frequency, put=__cordl_internal_set_mono_lfo_1_frequency)) float_t  mono_lfo_1_frequency;

/// @brief Field mono_lfo_1_retrigger, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_mono_lfo_1_retrigger, put=__cordl_internal_set_mono_lfo_1_retrigger)) float_t  mono_lfo_1_retrigger;

/// @brief Field mono_lfo_1_sync, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_mono_lfo_1_sync, put=__cordl_internal_set_mono_lfo_1_sync)) float_t  mono_lfo_1_sync;

/// @brief Field mono_lfo_1_tempo, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_mono_lfo_1_tempo, put=__cordl_internal_set_mono_lfo_1_tempo)) float_t  mono_lfo_1_tempo;

/// @brief Field mono_lfo_1_waveform, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_mono_lfo_1_waveform, put=__cordl_internal_set_mono_lfo_1_waveform)) float_t  mono_lfo_1_waveform;

/// @brief Field mono_lfo_2_amplitude, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_mono_lfo_2_amplitude, put=__cordl_internal_set_mono_lfo_2_amplitude)) float_t  mono_lfo_2_amplitude;

/// @brief Field mono_lfo_2_frequency, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_mono_lfo_2_frequency, put=__cordl_internal_set_mono_lfo_2_frequency)) float_t  mono_lfo_2_frequency;

/// @brief Field mono_lfo_2_retrigger, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_mono_lfo_2_retrigger, put=__cordl_internal_set_mono_lfo_2_retrigger)) float_t  mono_lfo_2_retrigger;

/// @brief Field mono_lfo_2_sync, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_mono_lfo_2_sync, put=__cordl_internal_set_mono_lfo_2_sync)) float_t  mono_lfo_2_sync;

/// @brief Field mono_lfo_2_tempo, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_mono_lfo_2_tempo, put=__cordl_internal_set_mono_lfo_2_tempo)) float_t  mono_lfo_2_tempo;

/// @brief Field mono_lfo_2_waveform, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_mono_lfo_2_waveform, put=__cordl_internal_set_mono_lfo_2_waveform)) float_t  mono_lfo_2_waveform;

/// @brief Field noise_volume, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_noise_volume, put=__cordl_internal_set_noise_volume)) float_t  noise_volume;

/// @brief Field num_steps, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_num_steps, put=__cordl_internal_set_num_steps)) float_t  num_steps;

/// @brief Field osc_1_transpose, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_osc_1_transpose, put=__cordl_internal_set_osc_1_transpose)) float_t  osc_1_transpose;

/// @brief Field osc_1_tune, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_osc_1_tune, put=__cordl_internal_set_osc_1_tune)) float_t  osc_1_tune;

/// @brief Field osc_1_unison_detune, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_osc_1_unison_detune, put=__cordl_internal_set_osc_1_unison_detune)) float_t  osc_1_unison_detune;

/// @brief Field osc_1_unison_voices, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_osc_1_unison_voices, put=__cordl_internal_set_osc_1_unison_voices)) float_t  osc_1_unison_voices;

/// @brief Field osc_1_volume, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_osc_1_volume, put=__cordl_internal_set_osc_1_volume)) float_t  osc_1_volume;

/// @brief Field osc_1_waveform, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_osc_1_waveform, put=__cordl_internal_set_osc_1_waveform)) float_t  osc_1_waveform;

/// @brief Field osc_2_transpose, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_osc_2_transpose, put=__cordl_internal_set_osc_2_transpose)) float_t  osc_2_transpose;

/// @brief Field osc_2_tune, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_osc_2_tune, put=__cordl_internal_set_osc_2_tune)) float_t  osc_2_tune;

/// @brief Field osc_2_unison_detune, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get_osc_2_unison_detune, put=__cordl_internal_set_osc_2_unison_detune)) float_t  osc_2_unison_detune;

/// @brief Field osc_2_unison_voices, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_osc_2_unison_voices, put=__cordl_internal_set_osc_2_unison_voices)) float_t  osc_2_unison_voices;

/// @brief Field osc_2_volume, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_osc_2_volume, put=__cordl_internal_set_osc_2_volume)) float_t  osc_2_volume;

/// @brief Field osc_2_waveform, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_osc_2_waveform, put=__cordl_internal_set_osc_2_waveform)) float_t  osc_2_waveform;

/// @brief Field osc_feedback_amount, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get_osc_feedback_amount, put=__cordl_internal_set_osc_feedback_amount)) float_t  osc_feedback_amount;

/// @brief Field osc_feedback_transpose, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_osc_feedback_transpose, put=__cordl_internal_set_osc_feedback_transpose)) float_t  osc_feedback_transpose;

/// @brief Field osc_feedback_tune, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_osc_feedback_tune, put=__cordl_internal_set_osc_feedback_tune)) float_t  osc_feedback_tune;

/// @brief Field osc_mix, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_osc_mix, put=__cordl_internal_set_osc_mix)) float_t  osc_mix;

/// @brief Field pitch_bend_range, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitch_bend_range, put=__cordl_internal_set_pitch_bend_range)) float_t  pitch_bend_range;

/// @brief Field poly_lfo_amplitude, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_poly_lfo_amplitude, put=__cordl_internal_set_poly_lfo_amplitude)) float_t  poly_lfo_amplitude;

/// @brief Field poly_lfo_frequency, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get_poly_lfo_frequency, put=__cordl_internal_set_poly_lfo_frequency)) float_t  poly_lfo_frequency;

/// @brief Field poly_lfo_sync, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_poly_lfo_sync, put=__cordl_internal_set_poly_lfo_sync)) float_t  poly_lfo_sync;

/// @brief Field poly_lfo_tempo, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get_poly_lfo_tempo, put=__cordl_internal_set_poly_lfo_tempo)) float_t  poly_lfo_tempo;

/// @brief Field poly_lfo_waveform, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_poly_lfo_waveform, put=__cordl_internal_set_poly_lfo_waveform)) float_t  poly_lfo_waveform;

/// @brief Field polyphony, offset 0x154, size 0x4 
 __declspec(property(get=__cordl_internal_get_polyphony, put=__cordl_internal_set_polyphony)) float_t  polyphony;

/// @brief Field portamento, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_portamento, put=__cordl_internal_set_portamento)) float_t  portamento;

/// @brief Field portamento_type, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get_portamento_type, put=__cordl_internal_set_portamento_type)) float_t  portamento_type;

/// @brief Field resonance, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_resonance, put=__cordl_internal_set_resonance)) float_t  resonance;

/// @brief Field reverb_damping, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get_reverb_damping, put=__cordl_internal_set_reverb_damping)) float_t  reverb_damping;

/// @brief Field reverb_dry_wet, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_reverb_dry_wet, put=__cordl_internal_set_reverb_dry_wet)) float_t  reverb_dry_wet;

/// @brief Field reverb_feedback, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_reverb_feedback, put=__cordl_internal_set_reverb_feedback)) float_t  reverb_feedback;

/// @brief Field reverb_on, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get_reverb_on, put=__cordl_internal_set_reverb_on)) float_t  reverb_on;

/// @brief Field step_frequency, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_frequency, put=__cordl_internal_set_step_frequency)) float_t  step_frequency;

/// @brief Field step_seq_00, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_00, put=__cordl_internal_set_step_seq_00)) float_t  step_seq_00;

/// @brief Field step_seq_01, offset 0x17c, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_01, put=__cordl_internal_set_step_seq_01)) float_t  step_seq_01;

/// @brief Field step_seq_02, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_02, put=__cordl_internal_set_step_seq_02)) float_t  step_seq_02;

/// @brief Field step_seq_03, offset 0x184, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_03, put=__cordl_internal_set_step_seq_03)) float_t  step_seq_03;

/// @brief Field step_seq_04, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_04, put=__cordl_internal_set_step_seq_04)) float_t  step_seq_04;

/// @brief Field step_seq_05, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_05, put=__cordl_internal_set_step_seq_05)) float_t  step_seq_05;

/// @brief Field step_seq_06, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_06, put=__cordl_internal_set_step_seq_06)) float_t  step_seq_06;

/// @brief Field step_seq_07, offset 0x194, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_07, put=__cordl_internal_set_step_seq_07)) float_t  step_seq_07;

/// @brief Field step_seq_08, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_08, put=__cordl_internal_set_step_seq_08)) float_t  step_seq_08;

/// @brief Field step_seq_09, offset 0x19c, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_09, put=__cordl_internal_set_step_seq_09)) float_t  step_seq_09;

/// @brief Field step_seq_10, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_10, put=__cordl_internal_set_step_seq_10)) float_t  step_seq_10;

/// @brief Field step_seq_11, offset 0x1a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_11, put=__cordl_internal_set_step_seq_11)) float_t  step_seq_11;

/// @brief Field step_seq_12, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_12, put=__cordl_internal_set_step_seq_12)) float_t  step_seq_12;

/// @brief Field step_seq_13, offset 0x1ac, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_13, put=__cordl_internal_set_step_seq_13)) float_t  step_seq_13;

/// @brief Field step_seq_14, offset 0x1b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_14, put=__cordl_internal_set_step_seq_14)) float_t  step_seq_14;

/// @brief Field step_seq_15, offset 0x1b4, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_15, put=__cordl_internal_set_step_seq_15)) float_t  step_seq_15;

/// @brief Field step_seq_16, offset 0x1b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_16, put=__cordl_internal_set_step_seq_16)) float_t  step_seq_16;

/// @brief Field step_seq_17, offset 0x1bc, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_17, put=__cordl_internal_set_step_seq_17)) float_t  step_seq_17;

/// @brief Field step_seq_18, offset 0x1c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_18, put=__cordl_internal_set_step_seq_18)) float_t  step_seq_18;

/// @brief Field step_seq_19, offset 0x1c4, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_19, put=__cordl_internal_set_step_seq_19)) float_t  step_seq_19;

/// @brief Field step_seq_20, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_20, put=__cordl_internal_set_step_seq_20)) float_t  step_seq_20;

/// @brief Field step_seq_21, offset 0x1cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_21, put=__cordl_internal_set_step_seq_21)) float_t  step_seq_21;

/// @brief Field step_seq_22, offset 0x1d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_22, put=__cordl_internal_set_step_seq_22)) float_t  step_seq_22;

/// @brief Field step_seq_23, offset 0x1d4, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_23, put=__cordl_internal_set_step_seq_23)) float_t  step_seq_23;

/// @brief Field step_seq_24, offset 0x1d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_24, put=__cordl_internal_set_step_seq_24)) float_t  step_seq_24;

/// @brief Field step_seq_25, offset 0x1dc, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_25, put=__cordl_internal_set_step_seq_25)) float_t  step_seq_25;

/// @brief Field step_seq_26, offset 0x1e0, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_26, put=__cordl_internal_set_step_seq_26)) float_t  step_seq_26;

/// @brief Field step_seq_27, offset 0x1e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_27, put=__cordl_internal_set_step_seq_27)) float_t  step_seq_27;

/// @brief Field step_seq_28, offset 0x1e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_28, put=__cordl_internal_set_step_seq_28)) float_t  step_seq_28;

/// @brief Field step_seq_29, offset 0x1ec, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_29, put=__cordl_internal_set_step_seq_29)) float_t  step_seq_29;

/// @brief Field step_seq_30, offset 0x1f0, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_30, put=__cordl_internal_set_step_seq_30)) float_t  step_seq_30;

/// @brief Field step_seq_31, offset 0x1f4, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_seq_31, put=__cordl_internal_set_step_seq_31)) float_t  step_seq_31;

/// @brief Field step_sequencer_retrigger, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_sequencer_retrigger, put=__cordl_internal_set_step_sequencer_retrigger)) float_t  step_sequencer_retrigger;

/// @brief Field step_sequencer_sync, offset 0x1fc, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_sequencer_sync, put=__cordl_internal_set_step_sequencer_sync)) float_t  step_sequencer_sync;

/// @brief Field step_sequencer_tempo, offset 0x200, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_sequencer_tempo, put=__cordl_internal_set_step_sequencer_tempo)) float_t  step_sequencer_tempo;

/// @brief Field step_smoothing, offset 0x204, size 0x4 
 __declspec(property(get=__cordl_internal_get_step_smoothing, put=__cordl_internal_set_step_smoothing)) float_t  step_smoothing;

/// @brief Field stutter_frequency, offset 0x208, size 0x4 
 __declspec(property(get=__cordl_internal_get_stutter_frequency, put=__cordl_internal_set_stutter_frequency)) float_t  stutter_frequency;

/// @brief Field stutter_on, offset 0x20c, size 0x4 
 __declspec(property(get=__cordl_internal_get_stutter_on, put=__cordl_internal_set_stutter_on)) float_t  stutter_on;

/// @brief Field stutter_resample_frequency, offset 0x210, size 0x4 
 __declspec(property(get=__cordl_internal_get_stutter_resample_frequency, put=__cordl_internal_set_stutter_resample_frequency)) float_t  stutter_resample_frequency;

/// @brief Field stutter_resample_sync, offset 0x214, size 0x4 
 __declspec(property(get=__cordl_internal_get_stutter_resample_sync, put=__cordl_internal_set_stutter_resample_sync)) float_t  stutter_resample_sync;

/// @brief Field stutter_resample_tempo, offset 0x218, size 0x4 
 __declspec(property(get=__cordl_internal_get_stutter_resample_tempo, put=__cordl_internal_set_stutter_resample_tempo)) float_t  stutter_resample_tempo;

/// @brief Field stutter_softness, offset 0x21c, size 0x4 
 __declspec(property(get=__cordl_internal_get_stutter_softness, put=__cordl_internal_set_stutter_softness)) float_t  stutter_softness;

/// @brief Field stutter_sync, offset 0x220, size 0x4 
 __declspec(property(get=__cordl_internal_get_stutter_sync, put=__cordl_internal_set_stutter_sync)) float_t  stutter_sync;

/// @brief Field stutter_tempo, offset 0x224, size 0x4 
 __declspec(property(get=__cordl_internal_get_stutter_tempo, put=__cordl_internal_set_stutter_tempo)) float_t  stutter_tempo;

/// @brief Field sub_octave, offset 0x228, size 0x4 
 __declspec(property(get=__cordl_internal_get_sub_octave, put=__cordl_internal_set_sub_octave)) float_t  sub_octave;

/// @brief Field sub_shuffle, offset 0x22c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sub_shuffle, put=__cordl_internal_set_sub_shuffle)) float_t  sub_shuffle;

/// @brief Field sub_volume, offset 0x230, size 0x4 
 __declspec(property(get=__cordl_internal_get_sub_volume, put=__cordl_internal_set_sub_volume)) float_t  sub_volume;

/// @brief Field sub_waveform, offset 0x234, size 0x4 
 __declspec(property(get=__cordl_internal_get_sub_waveform, put=__cordl_internal_set_sub_waveform)) float_t  sub_waveform;

/// @brief Field unison_1_harmonize, offset 0x238, size 0x4 
 __declspec(property(get=__cordl_internal_get_unison_1_harmonize, put=__cordl_internal_set_unison_1_harmonize)) float_t  unison_1_harmonize;

/// @brief Field unison_2_harmonize, offset 0x23c, size 0x4 
 __declspec(property(get=__cordl_internal_get_unison_2_harmonize, put=__cordl_internal_set_unison_2_harmonize)) float_t  unison_2_harmonize;

/// @brief Field velocity_track, offset 0x240, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocity_track, put=__cordl_internal_set_velocity_track)) float_t  velocity_track;

/// @brief Field volume, offset 0x244, size 0x4 
 __declspec(property(get=__cordl_internal_get_volume, put=__cordl_internal_set_volume)) float_t  volume;

/// @brief Method Clone, addr 0x1820b50, size 0x254, virtual false, abstract: false, final false
static inline ::AudioHelm::HelmPatchSettings* Clone(::AudioHelm::HelmPatchSettings*  other) ;

/// @brief Method ConvertToPlugin, addr 0x1820878, size 0x148, virtual false, abstract: false, final false
static inline ::StringW ConvertToPlugin(::StringW  name) ;

/// @brief Method GetDestinationIndex, addr 0x1820a88, size 0xc8, virtual false, abstract: false, final false
static inline int32_t GetDestinationIndex(::StringW  dest) ;

/// @brief Method GetSourceIndex, addr 0x18209c0, size 0xc8, virtual false, abstract: false, final false
static inline int32_t GetSourceIndex(::StringW  source) ;

static inline ::AudioHelm::HelmPatchSettings* New_ctor() ;

constexpr float_t const& __cordl_internal_get_amp_attack() const;

constexpr float_t& __cordl_internal_get_amp_attack() ;

constexpr float_t const& __cordl_internal_get_amp_decay() const;

constexpr float_t& __cordl_internal_get_amp_decay() ;

constexpr float_t const& __cordl_internal_get_amp_release() const;

constexpr float_t& __cordl_internal_get_amp_release() ;

constexpr float_t const& __cordl_internal_get_amp_sustain() const;

constexpr float_t& __cordl_internal_get_amp_sustain() ;

constexpr float_t const& __cordl_internal_get_arp_frequency() const;

constexpr float_t& __cordl_internal_get_arp_frequency() ;

constexpr float_t const& __cordl_internal_get_arp_gate() const;

constexpr float_t& __cordl_internal_get_arp_gate() ;

constexpr float_t const& __cordl_internal_get_arp_octaves() const;

constexpr float_t& __cordl_internal_get_arp_octaves() ;

constexpr float_t const& __cordl_internal_get_arp_on() const;

constexpr float_t& __cordl_internal_get_arp_on() ;

constexpr float_t const& __cordl_internal_get_arp_pattern() const;

constexpr float_t& __cordl_internal_get_arp_pattern() ;

constexpr float_t const& __cordl_internal_get_arp_sync() const;

constexpr float_t& __cordl_internal_get_arp_sync() ;

constexpr float_t const& __cordl_internal_get_arp_tempo() const;

constexpr float_t& __cordl_internal_get_arp_tempo() ;

constexpr float_t const& __cordl_internal_get_beats_per_minute() const;

constexpr float_t& __cordl_internal_get_beats_per_minute() ;

constexpr float_t const& __cordl_internal_get_cross_modulation() const;

constexpr float_t& __cordl_internal_get_cross_modulation() ;

constexpr float_t const& __cordl_internal_get_cutoff() const;

constexpr float_t& __cordl_internal_get_cutoff() ;

constexpr float_t const& __cordl_internal_get_delay_dry_wet() const;

constexpr float_t& __cordl_internal_get_delay_dry_wet() ;

constexpr float_t const& __cordl_internal_get_delay_feedback() const;

constexpr float_t& __cordl_internal_get_delay_feedback() ;

constexpr float_t const& __cordl_internal_get_delay_frequency() const;

constexpr float_t& __cordl_internal_get_delay_frequency() ;

constexpr float_t const& __cordl_internal_get_delay_on() const;

constexpr float_t& __cordl_internal_get_delay_on() ;

constexpr float_t const& __cordl_internal_get_delay_sync() const;

constexpr float_t& __cordl_internal_get_delay_sync() ;

constexpr float_t const& __cordl_internal_get_delay_tempo() const;

constexpr float_t& __cordl_internal_get_delay_tempo() ;

constexpr float_t const& __cordl_internal_get_distortion_drive() const;

constexpr float_t& __cordl_internal_get_distortion_drive() ;

constexpr float_t const& __cordl_internal_get_distortion_mix() const;

constexpr float_t& __cordl_internal_get_distortion_mix() ;

constexpr float_t const& __cordl_internal_get_distortion_on() const;

constexpr float_t& __cordl_internal_get_distortion_on() ;

constexpr float_t const& __cordl_internal_get_distortion_type() const;

constexpr float_t& __cordl_internal_get_distortion_type() ;

constexpr float_t const& __cordl_internal_get_fil_attack() const;

constexpr float_t& __cordl_internal_get_fil_attack() ;

constexpr float_t const& __cordl_internal_get_fil_decay() const;

constexpr float_t& __cordl_internal_get_fil_decay() ;

constexpr float_t const& __cordl_internal_get_fil_env_depth() const;

constexpr float_t& __cordl_internal_get_fil_env_depth() ;

constexpr float_t const& __cordl_internal_get_fil_release() const;

constexpr float_t& __cordl_internal_get_fil_release() ;

constexpr float_t const& __cordl_internal_get_fil_sustain() const;

constexpr float_t& __cordl_internal_get_fil_sustain() ;

constexpr float_t const& __cordl_internal_get_filter_blend() const;

constexpr float_t& __cordl_internal_get_filter_blend() ;

constexpr float_t const& __cordl_internal_get_filter_drive() const;

constexpr float_t& __cordl_internal_get_filter_drive() ;

constexpr float_t const& __cordl_internal_get_filter_on() const;

constexpr float_t& __cordl_internal_get_filter_on() ;

constexpr float_t const& __cordl_internal_get_filter_saturation() const;

constexpr float_t& __cordl_internal_get_filter_saturation() ;

constexpr float_t const& __cordl_internal_get_filter_shelf() const;

constexpr float_t& __cordl_internal_get_filter_shelf() ;

constexpr float_t const& __cordl_internal_get_filter_style() const;

constexpr float_t& __cordl_internal_get_filter_style() ;

constexpr float_t const& __cordl_internal_get_filter_type() const;

constexpr float_t& __cordl_internal_get_filter_type() ;

constexpr float_t const& __cordl_internal_get_formant_on() const;

constexpr float_t& __cordl_internal_get_formant_on() ;

constexpr float_t const& __cordl_internal_get_formant_x() const;

constexpr float_t& __cordl_internal_get_formant_x() ;

constexpr float_t const& __cordl_internal_get_formant_y() const;

constexpr float_t& __cordl_internal_get_formant_y() ;

constexpr float_t const& __cordl_internal_get_keytrack() const;

constexpr float_t& __cordl_internal_get_keytrack() ;

constexpr float_t const& __cordl_internal_get_legato() const;

constexpr float_t& __cordl_internal_get_legato() ;

constexpr float_t const& __cordl_internal_get_mod_attack() const;

constexpr float_t& __cordl_internal_get_mod_attack() ;

constexpr float_t const& __cordl_internal_get_mod_decay() const;

constexpr float_t& __cordl_internal_get_mod_decay() ;

constexpr float_t const& __cordl_internal_get_mod_release() const;

constexpr float_t& __cordl_internal_get_mod_release() ;

constexpr float_t const& __cordl_internal_get_mod_sustain() const;

constexpr float_t& __cordl_internal_get_mod_sustain() ;

constexpr ::ArrayW<::AudioHelm::HelmModulationSetting*,::Array<::AudioHelm::HelmModulationSetting*>*> const& __cordl_internal_get_modulations() const;

constexpr ::ArrayW<::AudioHelm::HelmModulationSetting*,::Array<::AudioHelm::HelmModulationSetting*>*>& __cordl_internal_get_modulations() ;

constexpr float_t const& __cordl_internal_get_mono_lfo_1_amplitude() const;

constexpr float_t& __cordl_internal_get_mono_lfo_1_amplitude() ;

constexpr float_t const& __cordl_internal_get_mono_lfo_1_frequency() const;

constexpr float_t& __cordl_internal_get_mono_lfo_1_frequency() ;

constexpr float_t const& __cordl_internal_get_mono_lfo_1_retrigger() const;

constexpr float_t& __cordl_internal_get_mono_lfo_1_retrigger() ;

constexpr float_t const& __cordl_internal_get_mono_lfo_1_sync() const;

constexpr float_t& __cordl_internal_get_mono_lfo_1_sync() ;

constexpr float_t const& __cordl_internal_get_mono_lfo_1_tempo() const;

constexpr float_t& __cordl_internal_get_mono_lfo_1_tempo() ;

constexpr float_t const& __cordl_internal_get_mono_lfo_1_waveform() const;

constexpr float_t& __cordl_internal_get_mono_lfo_1_waveform() ;

constexpr float_t const& __cordl_internal_get_mono_lfo_2_amplitude() const;

constexpr float_t& __cordl_internal_get_mono_lfo_2_amplitude() ;

constexpr float_t const& __cordl_internal_get_mono_lfo_2_frequency() const;

constexpr float_t& __cordl_internal_get_mono_lfo_2_frequency() ;

constexpr float_t const& __cordl_internal_get_mono_lfo_2_retrigger() const;

constexpr float_t& __cordl_internal_get_mono_lfo_2_retrigger() ;

constexpr float_t const& __cordl_internal_get_mono_lfo_2_sync() const;

constexpr float_t& __cordl_internal_get_mono_lfo_2_sync() ;

constexpr float_t const& __cordl_internal_get_mono_lfo_2_tempo() const;

constexpr float_t& __cordl_internal_get_mono_lfo_2_tempo() ;

constexpr float_t const& __cordl_internal_get_mono_lfo_2_waveform() const;

constexpr float_t& __cordl_internal_get_mono_lfo_2_waveform() ;

constexpr float_t const& __cordl_internal_get_noise_volume() const;

constexpr float_t& __cordl_internal_get_noise_volume() ;

constexpr float_t const& __cordl_internal_get_num_steps() const;

constexpr float_t& __cordl_internal_get_num_steps() ;

constexpr float_t const& __cordl_internal_get_osc_1_transpose() const;

constexpr float_t& __cordl_internal_get_osc_1_transpose() ;

constexpr float_t const& __cordl_internal_get_osc_1_tune() const;

constexpr float_t& __cordl_internal_get_osc_1_tune() ;

constexpr float_t const& __cordl_internal_get_osc_1_unison_detune() const;

constexpr float_t& __cordl_internal_get_osc_1_unison_detune() ;

constexpr float_t const& __cordl_internal_get_osc_1_unison_voices() const;

constexpr float_t& __cordl_internal_get_osc_1_unison_voices() ;

constexpr float_t const& __cordl_internal_get_osc_1_volume() const;

constexpr float_t& __cordl_internal_get_osc_1_volume() ;

constexpr float_t const& __cordl_internal_get_osc_1_waveform() const;

constexpr float_t& __cordl_internal_get_osc_1_waveform() ;

constexpr float_t const& __cordl_internal_get_osc_2_transpose() const;

constexpr float_t& __cordl_internal_get_osc_2_transpose() ;

constexpr float_t const& __cordl_internal_get_osc_2_tune() const;

constexpr float_t& __cordl_internal_get_osc_2_tune() ;

constexpr float_t const& __cordl_internal_get_osc_2_unison_detune() const;

constexpr float_t& __cordl_internal_get_osc_2_unison_detune() ;

constexpr float_t const& __cordl_internal_get_osc_2_unison_voices() const;

constexpr float_t& __cordl_internal_get_osc_2_unison_voices() ;

constexpr float_t const& __cordl_internal_get_osc_2_volume() const;

constexpr float_t& __cordl_internal_get_osc_2_volume() ;

constexpr float_t const& __cordl_internal_get_osc_2_waveform() const;

constexpr float_t& __cordl_internal_get_osc_2_waveform() ;

constexpr float_t const& __cordl_internal_get_osc_feedback_amount() const;

constexpr float_t& __cordl_internal_get_osc_feedback_amount() ;

constexpr float_t const& __cordl_internal_get_osc_feedback_transpose() const;

constexpr float_t& __cordl_internal_get_osc_feedback_transpose() ;

constexpr float_t const& __cordl_internal_get_osc_feedback_tune() const;

constexpr float_t& __cordl_internal_get_osc_feedback_tune() ;

constexpr float_t const& __cordl_internal_get_osc_mix() const;

constexpr float_t& __cordl_internal_get_osc_mix() ;

constexpr float_t const& __cordl_internal_get_pitch_bend_range() const;

constexpr float_t& __cordl_internal_get_pitch_bend_range() ;

constexpr float_t const& __cordl_internal_get_poly_lfo_amplitude() const;

constexpr float_t& __cordl_internal_get_poly_lfo_amplitude() ;

constexpr float_t const& __cordl_internal_get_poly_lfo_frequency() const;

constexpr float_t& __cordl_internal_get_poly_lfo_frequency() ;

constexpr float_t const& __cordl_internal_get_poly_lfo_sync() const;

constexpr float_t& __cordl_internal_get_poly_lfo_sync() ;

constexpr float_t const& __cordl_internal_get_poly_lfo_tempo() const;

constexpr float_t& __cordl_internal_get_poly_lfo_tempo() ;

constexpr float_t const& __cordl_internal_get_poly_lfo_waveform() const;

constexpr float_t& __cordl_internal_get_poly_lfo_waveform() ;

constexpr float_t const& __cordl_internal_get_polyphony() const;

constexpr float_t& __cordl_internal_get_polyphony() ;

constexpr float_t const& __cordl_internal_get_portamento() const;

constexpr float_t& __cordl_internal_get_portamento() ;

constexpr float_t const& __cordl_internal_get_portamento_type() const;

constexpr float_t& __cordl_internal_get_portamento_type() ;

constexpr float_t const& __cordl_internal_get_resonance() const;

constexpr float_t& __cordl_internal_get_resonance() ;

constexpr float_t const& __cordl_internal_get_reverb_damping() const;

constexpr float_t& __cordl_internal_get_reverb_damping() ;

constexpr float_t const& __cordl_internal_get_reverb_dry_wet() const;

constexpr float_t& __cordl_internal_get_reverb_dry_wet() ;

constexpr float_t const& __cordl_internal_get_reverb_feedback() const;

constexpr float_t& __cordl_internal_get_reverb_feedback() ;

constexpr float_t const& __cordl_internal_get_reverb_on() const;

constexpr float_t& __cordl_internal_get_reverb_on() ;

constexpr float_t const& __cordl_internal_get_step_frequency() const;

constexpr float_t& __cordl_internal_get_step_frequency() ;

constexpr float_t const& __cordl_internal_get_step_seq_00() const;

constexpr float_t& __cordl_internal_get_step_seq_00() ;

constexpr float_t const& __cordl_internal_get_step_seq_01() const;

constexpr float_t& __cordl_internal_get_step_seq_01() ;

constexpr float_t const& __cordl_internal_get_step_seq_02() const;

constexpr float_t& __cordl_internal_get_step_seq_02() ;

constexpr float_t const& __cordl_internal_get_step_seq_03() const;

constexpr float_t& __cordl_internal_get_step_seq_03() ;

constexpr float_t const& __cordl_internal_get_step_seq_04() const;

constexpr float_t& __cordl_internal_get_step_seq_04() ;

constexpr float_t const& __cordl_internal_get_step_seq_05() const;

constexpr float_t& __cordl_internal_get_step_seq_05() ;

constexpr float_t const& __cordl_internal_get_step_seq_06() const;

constexpr float_t& __cordl_internal_get_step_seq_06() ;

constexpr float_t const& __cordl_internal_get_step_seq_07() const;

constexpr float_t& __cordl_internal_get_step_seq_07() ;

constexpr float_t const& __cordl_internal_get_step_seq_08() const;

constexpr float_t& __cordl_internal_get_step_seq_08() ;

constexpr float_t const& __cordl_internal_get_step_seq_09() const;

constexpr float_t& __cordl_internal_get_step_seq_09() ;

constexpr float_t const& __cordl_internal_get_step_seq_10() const;

constexpr float_t& __cordl_internal_get_step_seq_10() ;

constexpr float_t const& __cordl_internal_get_step_seq_11() const;

constexpr float_t& __cordl_internal_get_step_seq_11() ;

constexpr float_t const& __cordl_internal_get_step_seq_12() const;

constexpr float_t& __cordl_internal_get_step_seq_12() ;

constexpr float_t const& __cordl_internal_get_step_seq_13() const;

constexpr float_t& __cordl_internal_get_step_seq_13() ;

constexpr float_t const& __cordl_internal_get_step_seq_14() const;

constexpr float_t& __cordl_internal_get_step_seq_14() ;

constexpr float_t const& __cordl_internal_get_step_seq_15() const;

constexpr float_t& __cordl_internal_get_step_seq_15() ;

constexpr float_t const& __cordl_internal_get_step_seq_16() const;

constexpr float_t& __cordl_internal_get_step_seq_16() ;

constexpr float_t const& __cordl_internal_get_step_seq_17() const;

constexpr float_t& __cordl_internal_get_step_seq_17() ;

constexpr float_t const& __cordl_internal_get_step_seq_18() const;

constexpr float_t& __cordl_internal_get_step_seq_18() ;

constexpr float_t const& __cordl_internal_get_step_seq_19() const;

constexpr float_t& __cordl_internal_get_step_seq_19() ;

constexpr float_t const& __cordl_internal_get_step_seq_20() const;

constexpr float_t& __cordl_internal_get_step_seq_20() ;

constexpr float_t const& __cordl_internal_get_step_seq_21() const;

constexpr float_t& __cordl_internal_get_step_seq_21() ;

constexpr float_t const& __cordl_internal_get_step_seq_22() const;

constexpr float_t& __cordl_internal_get_step_seq_22() ;

constexpr float_t const& __cordl_internal_get_step_seq_23() const;

constexpr float_t& __cordl_internal_get_step_seq_23() ;

constexpr float_t const& __cordl_internal_get_step_seq_24() const;

constexpr float_t& __cordl_internal_get_step_seq_24() ;

constexpr float_t const& __cordl_internal_get_step_seq_25() const;

constexpr float_t& __cordl_internal_get_step_seq_25() ;

constexpr float_t const& __cordl_internal_get_step_seq_26() const;

constexpr float_t& __cordl_internal_get_step_seq_26() ;

constexpr float_t const& __cordl_internal_get_step_seq_27() const;

constexpr float_t& __cordl_internal_get_step_seq_27() ;

constexpr float_t const& __cordl_internal_get_step_seq_28() const;

constexpr float_t& __cordl_internal_get_step_seq_28() ;

constexpr float_t const& __cordl_internal_get_step_seq_29() const;

constexpr float_t& __cordl_internal_get_step_seq_29() ;

constexpr float_t const& __cordl_internal_get_step_seq_30() const;

constexpr float_t& __cordl_internal_get_step_seq_30() ;

constexpr float_t const& __cordl_internal_get_step_seq_31() const;

constexpr float_t& __cordl_internal_get_step_seq_31() ;

constexpr float_t const& __cordl_internal_get_step_sequencer_retrigger() const;

constexpr float_t& __cordl_internal_get_step_sequencer_retrigger() ;

constexpr float_t const& __cordl_internal_get_step_sequencer_sync() const;

constexpr float_t& __cordl_internal_get_step_sequencer_sync() ;

constexpr float_t const& __cordl_internal_get_step_sequencer_tempo() const;

constexpr float_t& __cordl_internal_get_step_sequencer_tempo() ;

constexpr float_t const& __cordl_internal_get_step_smoothing() const;

constexpr float_t& __cordl_internal_get_step_smoothing() ;

constexpr float_t const& __cordl_internal_get_stutter_frequency() const;

constexpr float_t& __cordl_internal_get_stutter_frequency() ;

constexpr float_t const& __cordl_internal_get_stutter_on() const;

constexpr float_t& __cordl_internal_get_stutter_on() ;

constexpr float_t const& __cordl_internal_get_stutter_resample_frequency() const;

constexpr float_t& __cordl_internal_get_stutter_resample_frequency() ;

constexpr float_t const& __cordl_internal_get_stutter_resample_sync() const;

constexpr float_t& __cordl_internal_get_stutter_resample_sync() ;

constexpr float_t const& __cordl_internal_get_stutter_resample_tempo() const;

constexpr float_t& __cordl_internal_get_stutter_resample_tempo() ;

constexpr float_t const& __cordl_internal_get_stutter_softness() const;

constexpr float_t& __cordl_internal_get_stutter_softness() ;

constexpr float_t const& __cordl_internal_get_stutter_sync() const;

constexpr float_t& __cordl_internal_get_stutter_sync() ;

constexpr float_t const& __cordl_internal_get_stutter_tempo() const;

constexpr float_t& __cordl_internal_get_stutter_tempo() ;

constexpr float_t const& __cordl_internal_get_sub_octave() const;

constexpr float_t& __cordl_internal_get_sub_octave() ;

constexpr float_t const& __cordl_internal_get_sub_shuffle() const;

constexpr float_t& __cordl_internal_get_sub_shuffle() ;

constexpr float_t const& __cordl_internal_get_sub_volume() const;

constexpr float_t& __cordl_internal_get_sub_volume() ;

constexpr float_t const& __cordl_internal_get_sub_waveform() const;

constexpr float_t& __cordl_internal_get_sub_waveform() ;

constexpr float_t const& __cordl_internal_get_unison_1_harmonize() const;

constexpr float_t& __cordl_internal_get_unison_1_harmonize() ;

constexpr float_t const& __cordl_internal_get_unison_2_harmonize() const;

constexpr float_t& __cordl_internal_get_unison_2_harmonize() ;

constexpr float_t const& __cordl_internal_get_velocity_track() const;

constexpr float_t& __cordl_internal_get_velocity_track() ;

constexpr float_t const& __cordl_internal_get_volume() const;

constexpr float_t& __cordl_internal_get_volume() ;

constexpr void __cordl_internal_set_amp_attack(float_t  value) ;

constexpr void __cordl_internal_set_amp_decay(float_t  value) ;

constexpr void __cordl_internal_set_amp_release(float_t  value) ;

constexpr void __cordl_internal_set_amp_sustain(float_t  value) ;

constexpr void __cordl_internal_set_arp_frequency(float_t  value) ;

constexpr void __cordl_internal_set_arp_gate(float_t  value) ;

constexpr void __cordl_internal_set_arp_octaves(float_t  value) ;

constexpr void __cordl_internal_set_arp_on(float_t  value) ;

constexpr void __cordl_internal_set_arp_pattern(float_t  value) ;

constexpr void __cordl_internal_set_arp_sync(float_t  value) ;

constexpr void __cordl_internal_set_arp_tempo(float_t  value) ;

constexpr void __cordl_internal_set_beats_per_minute(float_t  value) ;

constexpr void __cordl_internal_set_cross_modulation(float_t  value) ;

constexpr void __cordl_internal_set_cutoff(float_t  value) ;

constexpr void __cordl_internal_set_delay_dry_wet(float_t  value) ;

constexpr void __cordl_internal_set_delay_feedback(float_t  value) ;

constexpr void __cordl_internal_set_delay_frequency(float_t  value) ;

constexpr void __cordl_internal_set_delay_on(float_t  value) ;

constexpr void __cordl_internal_set_delay_sync(float_t  value) ;

constexpr void __cordl_internal_set_delay_tempo(float_t  value) ;

constexpr void __cordl_internal_set_distortion_drive(float_t  value) ;

constexpr void __cordl_internal_set_distortion_mix(float_t  value) ;

constexpr void __cordl_internal_set_distortion_on(float_t  value) ;

constexpr void __cordl_internal_set_distortion_type(float_t  value) ;

constexpr void __cordl_internal_set_fil_attack(float_t  value) ;

constexpr void __cordl_internal_set_fil_decay(float_t  value) ;

constexpr void __cordl_internal_set_fil_env_depth(float_t  value) ;

constexpr void __cordl_internal_set_fil_release(float_t  value) ;

constexpr void __cordl_internal_set_fil_sustain(float_t  value) ;

constexpr void __cordl_internal_set_filter_blend(float_t  value) ;

constexpr void __cordl_internal_set_filter_drive(float_t  value) ;

constexpr void __cordl_internal_set_filter_on(float_t  value) ;

constexpr void __cordl_internal_set_filter_saturation(float_t  value) ;

constexpr void __cordl_internal_set_filter_shelf(float_t  value) ;

constexpr void __cordl_internal_set_filter_style(float_t  value) ;

constexpr void __cordl_internal_set_filter_type(float_t  value) ;

constexpr void __cordl_internal_set_formant_on(float_t  value) ;

constexpr void __cordl_internal_set_formant_x(float_t  value) ;

constexpr void __cordl_internal_set_formant_y(float_t  value) ;

constexpr void __cordl_internal_set_keytrack(float_t  value) ;

constexpr void __cordl_internal_set_legato(float_t  value) ;

constexpr void __cordl_internal_set_mod_attack(float_t  value) ;

constexpr void __cordl_internal_set_mod_decay(float_t  value) ;

constexpr void __cordl_internal_set_mod_release(float_t  value) ;

constexpr void __cordl_internal_set_mod_sustain(float_t  value) ;

constexpr void __cordl_internal_set_modulations(::ArrayW<::AudioHelm::HelmModulationSetting*,::Array<::AudioHelm::HelmModulationSetting*>*>  value) ;

constexpr void __cordl_internal_set_mono_lfo_1_amplitude(float_t  value) ;

constexpr void __cordl_internal_set_mono_lfo_1_frequency(float_t  value) ;

constexpr void __cordl_internal_set_mono_lfo_1_retrigger(float_t  value) ;

constexpr void __cordl_internal_set_mono_lfo_1_sync(float_t  value) ;

constexpr void __cordl_internal_set_mono_lfo_1_tempo(float_t  value) ;

constexpr void __cordl_internal_set_mono_lfo_1_waveform(float_t  value) ;

constexpr void __cordl_internal_set_mono_lfo_2_amplitude(float_t  value) ;

constexpr void __cordl_internal_set_mono_lfo_2_frequency(float_t  value) ;

constexpr void __cordl_internal_set_mono_lfo_2_retrigger(float_t  value) ;

constexpr void __cordl_internal_set_mono_lfo_2_sync(float_t  value) ;

constexpr void __cordl_internal_set_mono_lfo_2_tempo(float_t  value) ;

constexpr void __cordl_internal_set_mono_lfo_2_waveform(float_t  value) ;

constexpr void __cordl_internal_set_noise_volume(float_t  value) ;

constexpr void __cordl_internal_set_num_steps(float_t  value) ;

constexpr void __cordl_internal_set_osc_1_transpose(float_t  value) ;

constexpr void __cordl_internal_set_osc_1_tune(float_t  value) ;

constexpr void __cordl_internal_set_osc_1_unison_detune(float_t  value) ;

constexpr void __cordl_internal_set_osc_1_unison_voices(float_t  value) ;

constexpr void __cordl_internal_set_osc_1_volume(float_t  value) ;

constexpr void __cordl_internal_set_osc_1_waveform(float_t  value) ;

constexpr void __cordl_internal_set_osc_2_transpose(float_t  value) ;

constexpr void __cordl_internal_set_osc_2_tune(float_t  value) ;

constexpr void __cordl_internal_set_osc_2_unison_detune(float_t  value) ;

constexpr void __cordl_internal_set_osc_2_unison_voices(float_t  value) ;

constexpr void __cordl_internal_set_osc_2_volume(float_t  value) ;

constexpr void __cordl_internal_set_osc_2_waveform(float_t  value) ;

constexpr void __cordl_internal_set_osc_feedback_amount(float_t  value) ;

constexpr void __cordl_internal_set_osc_feedback_transpose(float_t  value) ;

constexpr void __cordl_internal_set_osc_feedback_tune(float_t  value) ;

constexpr void __cordl_internal_set_osc_mix(float_t  value) ;

constexpr void __cordl_internal_set_pitch_bend_range(float_t  value) ;

constexpr void __cordl_internal_set_poly_lfo_amplitude(float_t  value) ;

constexpr void __cordl_internal_set_poly_lfo_frequency(float_t  value) ;

constexpr void __cordl_internal_set_poly_lfo_sync(float_t  value) ;

constexpr void __cordl_internal_set_poly_lfo_tempo(float_t  value) ;

constexpr void __cordl_internal_set_poly_lfo_waveform(float_t  value) ;

constexpr void __cordl_internal_set_polyphony(float_t  value) ;

constexpr void __cordl_internal_set_portamento(float_t  value) ;

constexpr void __cordl_internal_set_portamento_type(float_t  value) ;

constexpr void __cordl_internal_set_resonance(float_t  value) ;

constexpr void __cordl_internal_set_reverb_damping(float_t  value) ;

constexpr void __cordl_internal_set_reverb_dry_wet(float_t  value) ;

constexpr void __cordl_internal_set_reverb_feedback(float_t  value) ;

constexpr void __cordl_internal_set_reverb_on(float_t  value) ;

constexpr void __cordl_internal_set_step_frequency(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_00(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_01(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_02(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_03(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_04(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_05(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_06(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_07(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_08(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_09(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_10(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_11(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_12(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_13(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_14(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_15(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_16(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_17(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_18(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_19(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_20(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_21(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_22(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_23(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_24(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_25(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_26(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_27(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_28(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_29(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_30(float_t  value) ;

constexpr void __cordl_internal_set_step_seq_31(float_t  value) ;

constexpr void __cordl_internal_set_step_sequencer_retrigger(float_t  value) ;

constexpr void __cordl_internal_set_step_sequencer_sync(float_t  value) ;

constexpr void __cordl_internal_set_step_sequencer_tempo(float_t  value) ;

constexpr void __cordl_internal_set_step_smoothing(float_t  value) ;

constexpr void __cordl_internal_set_stutter_frequency(float_t  value) ;

constexpr void __cordl_internal_set_stutter_on(float_t  value) ;

constexpr void __cordl_internal_set_stutter_resample_frequency(float_t  value) ;

constexpr void __cordl_internal_set_stutter_resample_sync(float_t  value) ;

constexpr void __cordl_internal_set_stutter_resample_tempo(float_t  value) ;

constexpr void __cordl_internal_set_stutter_softness(float_t  value) ;

constexpr void __cordl_internal_set_stutter_sync(float_t  value) ;

constexpr void __cordl_internal_set_stutter_tempo(float_t  value) ;

constexpr void __cordl_internal_set_sub_octave(float_t  value) ;

constexpr void __cordl_internal_set_sub_shuffle(float_t  value) ;

constexpr void __cordl_internal_set_sub_volume(float_t  value) ;

constexpr void __cordl_internal_set_sub_waveform(float_t  value) ;

constexpr void __cordl_internal_set_unison_1_harmonize(float_t  value) ;

constexpr void __cordl_internal_set_unison_2_harmonize(float_t  value) ;

constexpr void __cordl_internal_set_velocity_track(float_t  value) ;

constexpr void __cordl_internal_set_volume(float_t  value) ;

/// @brief Method .ctor, addr 0x1820da4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_kModulationDestinations() ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_kModulationSources() ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_kShortenNames() ;

static inline void setStaticF_kModulationDestinations(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline void setStaticF_kModulationSources(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline void setStaticF_kShortenNames(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HelmPatchSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HelmPatchSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HelmPatchSettings(HelmPatchSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelmPatchSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelmPatchSettings(HelmPatchSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1880};

/// @brief Field kMaxCharacters offset 0xffffffff size 0x4
static constexpr int32_t  kMaxCharacters{static_cast<int32_t>(0xf)};

/// @brief Field kMaxModulations offset 0xffffffff size 0x4
static constexpr int32_t  kMaxModulations{static_cast<int32_t>(0x10)};

/// @brief Field amp_attack, offset: 0x10, size: 0x4, def value: None
 float_t  ___amp_attack;

/// @brief Field amp_decay, offset: 0x14, size: 0x4, def value: None
 float_t  ___amp_decay;

/// @brief Field amp_release, offset: 0x18, size: 0x4, def value: None
 float_t  ___amp_release;

/// @brief Field amp_sustain, offset: 0x1c, size: 0x4, def value: None
 float_t  ___amp_sustain;

/// @brief Field arp_frequency, offset: 0x20, size: 0x4, def value: None
 float_t  ___arp_frequency;

/// @brief Field arp_gate, offset: 0x24, size: 0x4, def value: None
 float_t  ___arp_gate;

/// @brief Field arp_octaves, offset: 0x28, size: 0x4, def value: None
 float_t  ___arp_octaves;

/// @brief Field arp_on, offset: 0x2c, size: 0x4, def value: None
 float_t  ___arp_on;

/// @brief Field arp_pattern, offset: 0x30, size: 0x4, def value: None
 float_t  ___arp_pattern;

/// @brief Field arp_sync, offset: 0x34, size: 0x4, def value: None
 float_t  ___arp_sync;

/// @brief Field arp_tempo, offset: 0x38, size: 0x4, def value: None
 float_t  ___arp_tempo;

/// @brief Field beats_per_minute, offset: 0x3c, size: 0x4, def value: None
 float_t  ___beats_per_minute;

/// @brief Field cross_modulation, offset: 0x40, size: 0x4, def value: None
 float_t  ___cross_modulation;

/// @brief Field cutoff, offset: 0x44, size: 0x4, def value: None
 float_t  ___cutoff;

/// @brief Field delay_dry_wet, offset: 0x48, size: 0x4, def value: None
 float_t  ___delay_dry_wet;

/// @brief Field delay_feedback, offset: 0x4c, size: 0x4, def value: None
 float_t  ___delay_feedback;

/// @brief Field delay_frequency, offset: 0x50, size: 0x4, def value: None
 float_t  ___delay_frequency;

/// @brief Field delay_on, offset: 0x54, size: 0x4, def value: None
 float_t  ___delay_on;

/// @brief Field delay_sync, offset: 0x58, size: 0x4, def value: None
 float_t  ___delay_sync;

/// @brief Field delay_tempo, offset: 0x5c, size: 0x4, def value: None
 float_t  ___delay_tempo;

/// @brief Field distortion_drive, offset: 0x60, size: 0x4, def value: None
 float_t  ___distortion_drive;

/// @brief Field distortion_mix, offset: 0x64, size: 0x4, def value: None
 float_t  ___distortion_mix;

/// @brief Field distortion_on, offset: 0x68, size: 0x4, def value: None
 float_t  ___distortion_on;

/// @brief Field distortion_type, offset: 0x6c, size: 0x4, def value: None
 float_t  ___distortion_type;

/// @brief Field fil_attack, offset: 0x70, size: 0x4, def value: None
 float_t  ___fil_attack;

/// @brief Field fil_decay, offset: 0x74, size: 0x4, def value: None
 float_t  ___fil_decay;

/// @brief Field fil_env_depth, offset: 0x78, size: 0x4, def value: None
 float_t  ___fil_env_depth;

/// @brief Field fil_release, offset: 0x7c, size: 0x4, def value: None
 float_t  ___fil_release;

/// @brief Field fil_sustain, offset: 0x80, size: 0x4, def value: None
 float_t  ___fil_sustain;

/// @brief Field filter_blend, offset: 0x84, size: 0x4, def value: None
 float_t  ___filter_blend;

/// @brief Field filter_drive, offset: 0x88, size: 0x4, def value: None
 float_t  ___filter_drive;

/// @brief Field filter_on, offset: 0x8c, size: 0x4, def value: None
 float_t  ___filter_on;

/// @brief Field filter_saturation, offset: 0x90, size: 0x4, def value: None
 float_t  ___filter_saturation;

/// @brief Field filter_shelf, offset: 0x94, size: 0x4, def value: None
 float_t  ___filter_shelf;

/// @brief Field filter_style, offset: 0x98, size: 0x4, def value: None
 float_t  ___filter_style;

/// @brief Field filter_type, offset: 0x9c, size: 0x4, def value: None
 float_t  ___filter_type;

/// @brief Field formant_on, offset: 0xa0, size: 0x4, def value: None
 float_t  ___formant_on;

/// @brief Field formant_x, offset: 0xa4, size: 0x4, def value: None
 float_t  ___formant_x;

/// @brief Field formant_y, offset: 0xa8, size: 0x4, def value: None
 float_t  ___formant_y;

/// @brief Field keytrack, offset: 0xac, size: 0x4, def value: None
 float_t  ___keytrack;

/// @brief Field legato, offset: 0xb0, size: 0x4, def value: None
 float_t  ___legato;

/// @brief Field mod_attack, offset: 0xb4, size: 0x4, def value: None
 float_t  ___mod_attack;

/// @brief Field mod_decay, offset: 0xb8, size: 0x4, def value: None
 float_t  ___mod_decay;

/// @brief Field mod_release, offset: 0xbc, size: 0x4, def value: None
 float_t  ___mod_release;

/// @brief Field mod_sustain, offset: 0xc0, size: 0x4, def value: None
 float_t  ___mod_sustain;

/// @brief Field mono_lfo_1_amplitude, offset: 0xc4, size: 0x4, def value: None
 float_t  ___mono_lfo_1_amplitude;

/// @brief Field mono_lfo_1_frequency, offset: 0xc8, size: 0x4, def value: None
 float_t  ___mono_lfo_1_frequency;

/// @brief Field mono_lfo_1_retrigger, offset: 0xcc, size: 0x4, def value: None
 float_t  ___mono_lfo_1_retrigger;

/// @brief Field mono_lfo_1_sync, offset: 0xd0, size: 0x4, def value: None
 float_t  ___mono_lfo_1_sync;

/// @brief Field mono_lfo_1_tempo, offset: 0xd4, size: 0x4, def value: None
 float_t  ___mono_lfo_1_tempo;

/// @brief Field mono_lfo_1_waveform, offset: 0xd8, size: 0x4, def value: None
 float_t  ___mono_lfo_1_waveform;

/// @brief Field mono_lfo_2_amplitude, offset: 0xdc, size: 0x4, def value: None
 float_t  ___mono_lfo_2_amplitude;

/// @brief Field mono_lfo_2_frequency, offset: 0xe0, size: 0x4, def value: None
 float_t  ___mono_lfo_2_frequency;

/// @brief Field mono_lfo_2_retrigger, offset: 0xe4, size: 0x4, def value: None
 float_t  ___mono_lfo_2_retrigger;

/// @brief Field mono_lfo_2_sync, offset: 0xe8, size: 0x4, def value: None
 float_t  ___mono_lfo_2_sync;

/// @brief Field mono_lfo_2_tempo, offset: 0xec, size: 0x4, def value: None
 float_t  ___mono_lfo_2_tempo;

/// @brief Field mono_lfo_2_waveform, offset: 0xf0, size: 0x4, def value: None
 float_t  ___mono_lfo_2_waveform;

/// @brief Field noise_volume, offset: 0xf4, size: 0x4, def value: None
 float_t  ___noise_volume;

/// @brief Field num_steps, offset: 0xf8, size: 0x4, def value: None
 float_t  ___num_steps;

/// @brief Field osc_1_transpose, offset: 0xfc, size: 0x4, def value: None
 float_t  ___osc_1_transpose;

/// @brief Field osc_1_tune, offset: 0x100, size: 0x4, def value: None
 float_t  ___osc_1_tune;

/// @brief Field osc_1_unison_detune, offset: 0x104, size: 0x4, def value: None
 float_t  ___osc_1_unison_detune;

/// @brief Field osc_1_unison_voices, offset: 0x108, size: 0x4, def value: None
 float_t  ___osc_1_unison_voices;

/// @brief Field osc_1_volume, offset: 0x10c, size: 0x4, def value: None
 float_t  ___osc_1_volume;

/// @brief Field osc_1_waveform, offset: 0x110, size: 0x4, def value: None
 float_t  ___osc_1_waveform;

/// @brief Field osc_2_transpose, offset: 0x114, size: 0x4, def value: None
 float_t  ___osc_2_transpose;

/// @brief Field osc_2_tune, offset: 0x118, size: 0x4, def value: None
 float_t  ___osc_2_tune;

/// @brief Field osc_2_unison_detune, offset: 0x11c, size: 0x4, def value: None
 float_t  ___osc_2_unison_detune;

/// @brief Field osc_2_unison_voices, offset: 0x120, size: 0x4, def value: None
 float_t  ___osc_2_unison_voices;

/// @brief Field osc_2_volume, offset: 0x124, size: 0x4, def value: None
 float_t  ___osc_2_volume;

/// @brief Field osc_2_waveform, offset: 0x128, size: 0x4, def value: None
 float_t  ___osc_2_waveform;

/// @brief Field osc_feedback_amount, offset: 0x12c, size: 0x4, def value: None
 float_t  ___osc_feedback_amount;

/// @brief Field osc_feedback_transpose, offset: 0x130, size: 0x4, def value: None
 float_t  ___osc_feedback_transpose;

/// @brief Field osc_feedback_tune, offset: 0x134, size: 0x4, def value: None
 float_t  ___osc_feedback_tune;

/// @brief Field osc_mix, offset: 0x138, size: 0x4, def value: None
 float_t  ___osc_mix;

/// @brief Field pitch_bend_range, offset: 0x13c, size: 0x4, def value: None
 float_t  ___pitch_bend_range;

/// @brief Field poly_lfo_amplitude, offset: 0x140, size: 0x4, def value: None
 float_t  ___poly_lfo_amplitude;

/// @brief Field poly_lfo_frequency, offset: 0x144, size: 0x4, def value: None
 float_t  ___poly_lfo_frequency;

/// @brief Field poly_lfo_sync, offset: 0x148, size: 0x4, def value: None
 float_t  ___poly_lfo_sync;

/// @brief Field poly_lfo_tempo, offset: 0x14c, size: 0x4, def value: None
 float_t  ___poly_lfo_tempo;

/// @brief Field poly_lfo_waveform, offset: 0x150, size: 0x4, def value: None
 float_t  ___poly_lfo_waveform;

/// @brief Field polyphony, offset: 0x154, size: 0x4, def value: None
 float_t  ___polyphony;

/// @brief Field portamento, offset: 0x158, size: 0x4, def value: None
 float_t  ___portamento;

/// @brief Field portamento_type, offset: 0x15c, size: 0x4, def value: None
 float_t  ___portamento_type;

/// @brief Field resonance, offset: 0x160, size: 0x4, def value: None
 float_t  ___resonance;

/// @brief Field reverb_damping, offset: 0x164, size: 0x4, def value: None
 float_t  ___reverb_damping;

/// @brief Field reverb_dry_wet, offset: 0x168, size: 0x4, def value: None
 float_t  ___reverb_dry_wet;

/// @brief Field reverb_feedback, offset: 0x16c, size: 0x4, def value: None
 float_t  ___reverb_feedback;

/// @brief Field reverb_on, offset: 0x170, size: 0x4, def value: None
 float_t  ___reverb_on;

/// @brief Field step_frequency, offset: 0x174, size: 0x4, def value: None
 float_t  ___step_frequency;

/// @brief Field step_seq_00, offset: 0x178, size: 0x4, def value: None
 float_t  ___step_seq_00;

/// @brief Field step_seq_01, offset: 0x17c, size: 0x4, def value: None
 float_t  ___step_seq_01;

/// @brief Field step_seq_02, offset: 0x180, size: 0x4, def value: None
 float_t  ___step_seq_02;

/// @brief Field step_seq_03, offset: 0x184, size: 0x4, def value: None
 float_t  ___step_seq_03;

/// @brief Field step_seq_04, offset: 0x188, size: 0x4, def value: None
 float_t  ___step_seq_04;

/// @brief Field step_seq_05, offset: 0x18c, size: 0x4, def value: None
 float_t  ___step_seq_05;

/// @brief Field step_seq_06, offset: 0x190, size: 0x4, def value: None
 float_t  ___step_seq_06;

/// @brief Field step_seq_07, offset: 0x194, size: 0x4, def value: None
 float_t  ___step_seq_07;

/// @brief Field step_seq_08, offset: 0x198, size: 0x4, def value: None
 float_t  ___step_seq_08;

/// @brief Field step_seq_09, offset: 0x19c, size: 0x4, def value: None
 float_t  ___step_seq_09;

/// @brief Field step_seq_10, offset: 0x1a0, size: 0x4, def value: None
 float_t  ___step_seq_10;

/// @brief Field step_seq_11, offset: 0x1a4, size: 0x4, def value: None
 float_t  ___step_seq_11;

/// @brief Field step_seq_12, offset: 0x1a8, size: 0x4, def value: None
 float_t  ___step_seq_12;

/// @brief Field step_seq_13, offset: 0x1ac, size: 0x4, def value: None
 float_t  ___step_seq_13;

/// @brief Field step_seq_14, offset: 0x1b0, size: 0x4, def value: None
 float_t  ___step_seq_14;

/// @brief Field step_seq_15, offset: 0x1b4, size: 0x4, def value: None
 float_t  ___step_seq_15;

/// @brief Field step_seq_16, offset: 0x1b8, size: 0x4, def value: None
 float_t  ___step_seq_16;

/// @brief Field step_seq_17, offset: 0x1bc, size: 0x4, def value: None
 float_t  ___step_seq_17;

/// @brief Field step_seq_18, offset: 0x1c0, size: 0x4, def value: None
 float_t  ___step_seq_18;

/// @brief Field step_seq_19, offset: 0x1c4, size: 0x4, def value: None
 float_t  ___step_seq_19;

/// @brief Field step_seq_20, offset: 0x1c8, size: 0x4, def value: None
 float_t  ___step_seq_20;

/// @brief Field step_seq_21, offset: 0x1cc, size: 0x4, def value: None
 float_t  ___step_seq_21;

/// @brief Field step_seq_22, offset: 0x1d0, size: 0x4, def value: None
 float_t  ___step_seq_22;

/// @brief Field step_seq_23, offset: 0x1d4, size: 0x4, def value: None
 float_t  ___step_seq_23;

/// @brief Field step_seq_24, offset: 0x1d8, size: 0x4, def value: None
 float_t  ___step_seq_24;

/// @brief Field step_seq_25, offset: 0x1dc, size: 0x4, def value: None
 float_t  ___step_seq_25;

/// @brief Field step_seq_26, offset: 0x1e0, size: 0x4, def value: None
 float_t  ___step_seq_26;

/// @brief Field step_seq_27, offset: 0x1e4, size: 0x4, def value: None
 float_t  ___step_seq_27;

/// @brief Field step_seq_28, offset: 0x1e8, size: 0x4, def value: None
 float_t  ___step_seq_28;

/// @brief Field step_seq_29, offset: 0x1ec, size: 0x4, def value: None
 float_t  ___step_seq_29;

/// @brief Field step_seq_30, offset: 0x1f0, size: 0x4, def value: None
 float_t  ___step_seq_30;

/// @brief Field step_seq_31, offset: 0x1f4, size: 0x4, def value: None
 float_t  ___step_seq_31;

/// @brief Field step_sequencer_retrigger, offset: 0x1f8, size: 0x4, def value: None
 float_t  ___step_sequencer_retrigger;

/// @brief Field step_sequencer_sync, offset: 0x1fc, size: 0x4, def value: None
 float_t  ___step_sequencer_sync;

/// @brief Field step_sequencer_tempo, offset: 0x200, size: 0x4, def value: None
 float_t  ___step_sequencer_tempo;

/// @brief Field step_smoothing, offset: 0x204, size: 0x4, def value: None
 float_t  ___step_smoothing;

/// @brief Field stutter_frequency, offset: 0x208, size: 0x4, def value: None
 float_t  ___stutter_frequency;

/// @brief Field stutter_on, offset: 0x20c, size: 0x4, def value: None
 float_t  ___stutter_on;

/// @brief Field stutter_resample_frequency, offset: 0x210, size: 0x4, def value: None
 float_t  ___stutter_resample_frequency;

/// @brief Field stutter_resample_sync, offset: 0x214, size: 0x4, def value: None
 float_t  ___stutter_resample_sync;

/// @brief Field stutter_resample_tempo, offset: 0x218, size: 0x4, def value: None
 float_t  ___stutter_resample_tempo;

/// @brief Field stutter_softness, offset: 0x21c, size: 0x4, def value: None
 float_t  ___stutter_softness;

/// @brief Field stutter_sync, offset: 0x220, size: 0x4, def value: None
 float_t  ___stutter_sync;

/// @brief Field stutter_tempo, offset: 0x224, size: 0x4, def value: None
 float_t  ___stutter_tempo;

/// @brief Field sub_octave, offset: 0x228, size: 0x4, def value: None
 float_t  ___sub_octave;

/// @brief Field sub_shuffle, offset: 0x22c, size: 0x4, def value: None
 float_t  ___sub_shuffle;

/// @brief Field sub_volume, offset: 0x230, size: 0x4, def value: None
 float_t  ___sub_volume;

/// @brief Field sub_waveform, offset: 0x234, size: 0x4, def value: None
 float_t  ___sub_waveform;

/// @brief Field unison_1_harmonize, offset: 0x238, size: 0x4, def value: None
 float_t  ___unison_1_harmonize;

/// @brief Field unison_2_harmonize, offset: 0x23c, size: 0x4, def value: None
 float_t  ___unison_2_harmonize;

/// @brief Field velocity_track, offset: 0x240, size: 0x4, def value: None
 float_t  ___velocity_track;

/// @brief Field volume, offset: 0x244, size: 0x4, def value: None
 float_t  ___volume;

/// @brief Field modulations, offset: 0x248, size: 0x8, def value: None
 ::ArrayW<::AudioHelm::HelmModulationSetting*,::Array<::AudioHelm::HelmModulationSetting*>*>  ___modulations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___amp_attack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___amp_decay) == 0x14, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___amp_release) == 0x18, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___amp_sustain) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___arp_frequency) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___arp_gate) == 0x24, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___arp_octaves) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___arp_on) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___arp_pattern) == 0x30, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___arp_sync) == 0x34, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___arp_tempo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___beats_per_minute) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___cross_modulation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___cutoff) == 0x44, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___delay_dry_wet) == 0x48, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___delay_feedback) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___delay_frequency) == 0x50, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___delay_on) == 0x54, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___delay_sync) == 0x58, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___delay_tempo) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___distortion_drive) == 0x60, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___distortion_mix) == 0x64, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___distortion_on) == 0x68, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___distortion_type) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___fil_attack) == 0x70, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___fil_decay) == 0x74, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___fil_env_depth) == 0x78, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___fil_release) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___fil_sustain) == 0x80, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___filter_blend) == 0x84, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___filter_drive) == 0x88, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___filter_on) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___filter_saturation) == 0x90, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___filter_shelf) == 0x94, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___filter_style) == 0x98, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___filter_type) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___formant_on) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___formant_x) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___formant_y) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___keytrack) == 0xac, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___legato) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___mod_attack) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___mod_decay) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___mod_release) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___mod_sustain) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___mono_lfo_1_amplitude) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___mono_lfo_1_frequency) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___mono_lfo_1_retrigger) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___mono_lfo_1_sync) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___mono_lfo_1_tempo) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___mono_lfo_1_waveform) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___mono_lfo_2_amplitude) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___mono_lfo_2_frequency) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___mono_lfo_2_retrigger) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___mono_lfo_2_sync) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___mono_lfo_2_tempo) == 0xec, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___mono_lfo_2_waveform) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___noise_volume) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___num_steps) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___osc_1_transpose) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___osc_1_tune) == 0x100, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___osc_1_unison_detune) == 0x104, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___osc_1_unison_voices) == 0x108, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___osc_1_volume) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___osc_1_waveform) == 0x110, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___osc_2_transpose) == 0x114, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___osc_2_tune) == 0x118, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___osc_2_unison_detune) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___osc_2_unison_voices) == 0x120, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___osc_2_volume) == 0x124, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___osc_2_waveform) == 0x128, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___osc_feedback_amount) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___osc_feedback_transpose) == 0x130, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___osc_feedback_tune) == 0x134, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___osc_mix) == 0x138, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___pitch_bend_range) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___poly_lfo_amplitude) == 0x140, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___poly_lfo_frequency) == 0x144, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___poly_lfo_sync) == 0x148, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___poly_lfo_tempo) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___poly_lfo_waveform) == 0x150, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___polyphony) == 0x154, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___portamento) == 0x158, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___portamento_type) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___resonance) == 0x160, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___reverb_damping) == 0x164, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___reverb_dry_wet) == 0x168, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___reverb_feedback) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___reverb_on) == 0x170, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_frequency) == 0x174, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_00) == 0x178, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_01) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_02) == 0x180, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_03) == 0x184, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_04) == 0x188, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_05) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_06) == 0x190, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_07) == 0x194, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_08) == 0x198, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_09) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_10) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_11) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_12) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_13) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_14) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_15) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_16) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_17) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_18) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_19) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_20) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_21) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_22) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_23) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_24) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_25) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_26) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_27) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_28) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_29) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_30) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_seq_31) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_sequencer_retrigger) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_sequencer_sync) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_sequencer_tempo) == 0x200, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___step_smoothing) == 0x204, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___stutter_frequency) == 0x208, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___stutter_on) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___stutter_resample_frequency) == 0x210, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___stutter_resample_sync) == 0x214, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___stutter_resample_tempo) == 0x218, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___stutter_softness) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___stutter_sync) == 0x220, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___stutter_tempo) == 0x224, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___sub_octave) == 0x228, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___sub_shuffle) == 0x22c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___sub_volume) == 0x230, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___sub_waveform) == 0x234, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___unison_1_harmonize) == 0x238, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___unison_2_harmonize) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___velocity_track) == 0x240, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___volume) == 0x244, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatchSettings, ___modulations) == 0x248, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::HelmPatchSettings, 0x250>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::HelmPatchSettings);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::HelmPatchSettings*, "AudioHelm", "HelmPatchSettings");
